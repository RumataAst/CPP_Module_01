#include "Harl.hpp"

void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
            << std::endl << "I really do!" 
            << std::endl;
}

void Harl::info ( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money." 
            << std::endl << "You didn’t put enough bacon in my burger!"
            << std::endl << "If you did, I wouldn’t be asking for more!" 
            << std::endl;
}

void Harl::warning ( void ) {
    std::cout << "I think I deserve to have some extra bacon for free." 
            << std::endl << "I’ve been coming for years whereas you started working here since last month." 
            << std::endl;
}

void Harl::error ( void ) {
    std::cout << "This is unacceptable!" 
            << std::endl << "I want to speak to the manager now." 
            << std::endl;
}

void Harl::complain( std::string level ) {
    const  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*map[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (size_t i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            (this->*map[i])();
            return ;
        }
    }

    std::cout << "Probably complaining about insignificant problems" << std::endl;
}