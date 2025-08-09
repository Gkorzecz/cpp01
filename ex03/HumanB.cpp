#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL)
{}

HumanB::~HumanB()
{}

void HumanB::attack(void)
{
    if (this->_weapon == NULL)
    {
        std::cout << this->_name << " has no weapon to attack with !" << std::endl;
        return;
    }
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}