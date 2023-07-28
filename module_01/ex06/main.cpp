
#include "Harl.hpp"

int     checkInput(std::string level){
    std::string     listLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (level == listLevel[i])
            return (i);
    }
    return (DEFAULT);
};

int main(int ac, char **av){
    Harl            harl;
    int             end = 0;
    std::string     listLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    if (ac != 2)
    {
        std::cout << "Error" << std::endl
                << "Please choose a level" << std::endl
                << "(DEBUG, INFO, WARNING, ERROR, ...)" << std::endl;
        return (1);
    }
    switch (checkInput(av[1])){
        case DEBUG:
            end = 0;
            break;
        case INFO:
            end = 1;
            break;
        case WARNING:
            end = 2;
            break;
        case ERROR:
            end = 3;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return (0);
    }
    for (int i = end; i < 4; ++i)
    {
        harl.complain(listLevel[i]);
        std::cout << std::endl;
    }
    return (0);
};