#include "Harl.hpp"

void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
            << std::endl;
}

void Harl::info ( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
            << std::endl;
}

void Harl::warning ( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." 
            << std::endl;
}

void Harl::error ( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." 
            << std::endl;
}

void Harl::complain( std::string level ) {
    const  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int  index = 0;
    void (Harl::*map[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        std::cout << "Probably complaining about insignificant problems" << std::endl;
        return;
    }

    switch (index) {
        case 0: (this->*map[0])();
        case 1: (this->*map[1])();
        case 2: (this->*map[2])();
        case 3: (this->*map[3])(); break;
    }
}