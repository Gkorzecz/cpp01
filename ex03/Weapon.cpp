#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string &initType) : type(initType)
{}

Weapon::~Weapon()
{
    std::cout << "Weapon has been destroyed." << std::endl;
}