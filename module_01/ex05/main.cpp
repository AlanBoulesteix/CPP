
#include "Harl.hpp"

bool    isConplain(std::string inputLevel, std::string listLevel[4]){

    for (int i = 0; i < 4; i++)
    {
        if (inputLevel == listLevel[i])
            return (true);
    }
    return (false);
};

int main(void){

    Harl    harl;
    std::string     inputLevel;
    std::string     listLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (1)
    {
        std::cout << "LEVEL: ";
        std::cin >> inputLevel;
        if (std::cin.eof())
        {
            std::cout << std::endl
                    << "CTL-D Received" << std::endl
                    << "Program will close" << std::endl;
            return (0);
        }
        if (isConplain(inputLevel, listLevel))
            harl.complain(inputLevel);
        else if (inputLevel == "Q")
            break;
        else
            std::cout << "Please choose a valid level" << std::endl
                << "(DEBUG, INFO, WARNING, ERROR)" << std::endl;
    }
    return (0);
};