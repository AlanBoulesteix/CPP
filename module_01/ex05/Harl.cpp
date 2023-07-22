

#include "Harl.hpp"

Harl::Harl(void){

};

Harl::~Harl(void){

};

void    Harl::debug(void){
    std::cout << "\033[34mDEBUG:\033[0m My code is like a caffeinated squirrel on a caffeine high, running in all directions. Time to track down those jittery bugs before they spill coffee all over my project!" << std::endl;
};

void    Harl::info(void){
    std::cout << "\033[32mINFO:\033[0m Coffee status update: Current level - 90%. Productivity level - 200%. Alert: Approaching hyperactive coding mode. Please stand by for a java-fueled development frenzy." << std::endl;
};

void    Harl::warning(void){
    std::cout << "\033[35mWarning!\033[0m The coffee machine is displaying a 'low beans' error. Please refill immediately to avoid a code meltdown and potential programmer strike." << std::endl;
};

void    Harl::error(void){
    std::cout << "\033[31mError:\033[0m Brain.exe has encountered a coffee overflow exception. System shutting down for a mandatory caffeine reboot. Don't worry; I'll be back with a fresh brew!" << std::endl;
};


void    Harl::complain(std::string level){
    std::string     listLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functionPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
        if (level == listLevel[i])
            (this->*functionPtr[i])();
};