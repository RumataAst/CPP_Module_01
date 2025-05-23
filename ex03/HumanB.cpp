#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) 
    : _name(name), _weapon(NULL) {}

HumanB::~HumanB() {
    std::cout << _name << " RIP" << std::endl;
}

void HumanB::attack( void ) const {
    if (_weapon) {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    } else {
        std::cout << _name << " has no weapon to attack with!" << std::endl;
    }
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon; 
}
