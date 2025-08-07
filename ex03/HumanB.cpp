#include "HumanA.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) : _name(name), _weapon(weapon)
{}

HumanB::~HumanB()
{}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}