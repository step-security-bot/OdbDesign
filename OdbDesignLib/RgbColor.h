#pragma once

#include <string>

namespace Odb::Lib::FileModel::Design
{
    /// @class struct for representing preferred layer color
    /// @brief each color value ranges from 0% - 100%            
    /// noPreference is true if the Odb++ file does not specify a color
    struct RgbColor
    {        
        uint8_t red;
        uint8_t green;
        uint8_t blue;

        bool noPreference;

        RgbColor();
        RgbColor(const std::string& str);

        bool from_string(const std::string& str);
        std::string to_string();
    };
}
