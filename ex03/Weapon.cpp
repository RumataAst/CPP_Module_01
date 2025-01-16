#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon(void) {
    std::cout << "World no longer needs violence" << std::endl;
}

const std::string &Weapon::getType(void) {
    return (_type);
}

void    Weapon::setType (std::string new_type) {
    std::cout << "Evolution happened from " << _type 
                << " to " << new_type << std::endl;
    _type = new_type;
}