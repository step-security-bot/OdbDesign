#include "FileUploadController.h"

namespace Odb::App::Server
{
	FileUploadController::FileUploadController(Odb::Lib::IOdbServerApp& serverApp)
		: RouteController(serverApp)
	{
	}
	void FileUploadController::register_routes()
	{
		CROW_ROUTE(m_serverApp.crow_app(), "/files/upload/<string>").methods(crow::HTTPMethod::POST)
			([&](const crow::request& req, std::string filename)
				{
					const auto& contentType = req.get_header_value("Content-Type");
					if (contentType == "application/octet-stream")
					{
                        return handleOctetStreamUpload(filename, req);
					}
					else if (contentType == "multipart/form-upload")
					{
						return handleMultipartFormUpload(filename, req);
					}
					else
					{
						return crow::response(crow::status::BAD_REQUEST, "incorrect content type");
					}				
				});
	}

    crow::response FileUploadController::handleOctetStreamUpload(const std::string& filename, const crow::request& req)
    {
        // TODO: generate random temp filename
        const auto tempFilename = "temp.upload";
        std::ofstream outfile(tempFilename, std::ofstream::binary);
        outfile << req.body;
        outfile.close();

        // TODO: sanitize filename
        std::filesystem::path finalPath(m_serverApp.args().designsDir());
        finalPath /= filename;
        std::filesystem::rename(tempFilename, finalPath);

        return crow::response(crow::status::OK);
    }

    crow::response FileUploadController::handleMultipartFormUpload(const std::string& filename, const crow::request& req)
    {
        crow::multipart::message file_message(req);
        for (const auto& part : file_message.part_map)
        {
            const auto& part_name = part.first;
            const auto& part_value = part.second;
            CROW_LOG_DEBUG << "Part: " << part_name;
            if ("InputFile" == part_name)
            {
                // Extract the file name
                auto headers_it = part_value.headers.find("Content-Disposition");
                if (headers_it == part_value.headers.end())
                {
                    CROW_LOG_ERROR << "No Content-Disposition found";
                    return crow::response(400);
                }
                auto params_it = headers_it->second.params.find("filename");
                if (params_it == headers_it->second.params.end())
                {
                    CROW_LOG_ERROR << "Part with name \"InputFile\" should have a file";
                    return crow::response(400);
                }
                const std::string outfile_name = params_it->second;

                for (const auto& part_header : part_value.headers)
                {
                    const auto& part_header_name = part_header.first;
                    const auto& part_header_val = part_header.second;
                    CROW_LOG_DEBUG << "Header: " << part_header_name << '=' << part_header_val.value;
                    for (const auto& param : part_header_val.params)
                    {
                        const auto& param_key = param.first;
                        const auto& param_val = param.second;
                        CROW_LOG_DEBUG << " Param: " << param_key << ',' << param_val;
                    }
                }

                // Create a new file with the extracted file name and write file contents to it
                std::ofstream out_file(outfile_name);
                if (!out_file)
                {
                    CROW_LOG_ERROR << " Write to file failed\n";
                    continue;
                }
                out_file << part_value.body;
                out_file.close();
                CROW_LOG_INFO << " Contents written to " << outfile_name << '\n';
            }
            else
            {
                CROW_LOG_DEBUG << " Value: " << part_value.body << '\n';
            }
        }
        return crow::response(200);
    }
}