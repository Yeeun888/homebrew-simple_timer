#include <array>
#include <string>

//Refactror to use array instead of namespace
namespace CharacterArrays {
    using std::array;

    array<array<std::string, 5>, 11> BeautifulCharFiveLine { { //Keep in mind double brackets here
        
        {
            "000000  ",
            "00  00  ",
            "00  00  ",
            "00  00  ",
            "000000  ",
        },

        {
            "1111    ",
            "  11    ",
            "  11    ",
            "  11    ",
            "111111  ",
        },

        {
            "222222  ",
            "     2  ",
            "222222  ",
            "2       ",
            "222222  ",
        },

        {
            "333333  ",
            "    33  ",
            "333333  ",
            "    33  ",
            "333333  ",
        },

        {
            "44  44  ",
            "44  44  ",
            "444444  ",
            "    44  ",
            "    44  ",
        },

        {
            "555555  ",
            "55      ",
            "555555  ",
            "    55  ",
            "555555  ",
        },

        {
            "666666  ",
            "66      ",
            "666666  ",
            "66  66  ",
            "666666  ",
        },

        {
            "777777  ",
            "    77  ",
            "    77  ",
            "    77  ",
            "    77  ",
        },

        {
            "888888  ",
            "88  88  ",
            "888888  ",
            "88  88  ",
            "888888  ",
        },
        
        {
            "999999  ",
            "99  99  ",
            "999999  ",
            "    99  ",
            "999999  ",
        },

        {
            "    ",
            "::: ",
            "    ",
            "::: ",
            "    ",
        }
    } }; 

    array<array<std::string, 8>, 11> BeautifulCharEightLine { {
        {
            " .d8888b.     ",    
            "d88P  Y88b    ",    
            "888    888    ",    
            "888    888    ",    
            "888    888    ",    
            "888    888    ",    
            "Y88b  d88P    ",    
            " \"Y8888P\"     ",   

        },

        {
            "   888       ",
            "od8888       ",
            "   888       ",
            "   888       ",
            "   888       ",
            "   888       ",
            "   888       ",
            "888888888    ",
        },

        {
            " .d8888b.     ",
            "d88P  Y88b    ",
            "       888    ",
            "     .d88P    ",
            " .od888P\"     ",
            "d88P\"         ",
            "888\"          ",
            "888888888     ",
        },

        {
            " .d8888b.     ",
            "d88P  Y88b    ",
            "     .d88P    ",
            "    8888\"     ",
            "     \"Y8b.    ",
            "888    888    ",
            "Y88b  d88P    ",
            " \"Y8888P\"     ",
        },

        {
            "    d8888     ",
            "   d8P888     ",
            "  d8P 888     ",
            " d8P  888     ",
            "d88   888     ",
            "8888888888    ",
            "      888     ",
            "      888     ",
        },
        {
            "888888888     ",
            "888           ",
            "888           ",
            "8888888b.     ",
            "     \"Y88b    ",
            "       888    ",
            "Y88b  d88P    ",
            " \"Y8888P\"     ",
        },

        {
            " .d8888b.     ",
            "d88P  Y88b    ",
            "888           ",
            "888d888b.     ",
            "888P \"Y88b    ",
            "888    888    ",
            "Y88b  d88P    ",
            " \"Y8888P\"     ",
        },

        {
            "8888888888    ",
            "      d88P    ",
            "     d88P     ",
            "    d88P      ",
            " 88888888     ",
            "  d88P        ",
            " d88P         ",
            "d88P          ",
        },

        {
            " .d8888b.     ",
            "d88P  Y88b    ",
            "Y88b. d88P    ",
            " \"Y88888\"     ",
            ".d8P\"\"Y8b.    ",
            "888    888    ",
            "Y88b  d88P    ",
            " \"Y8888P\"     ",
        },    

        {
            " .d8888b.     ",
            "d88P  Y88b    ",
            "888    888    ",
            "Y88b. d888    ",
            " \"Y888P888    ",
            "       888    ",
            "Y88b  d88P    ",
            " \"Y8888P\"     ",
        },
        
        {
            "        ",
            " d0b    ",
            " 90P    ",
            "        ",
            "        ",
            " d0b    ",
            " 90P    ",
            "        ",
        }
    } };
};
