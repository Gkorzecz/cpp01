#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string &initType) : _type(initType)
{}

Weapon::~Weapon()
{}

void Weapon::setType(const std::string& type)
{
    this->_type = type;
}

const std::string& Weapon::getType() const
{
    return (_type);
}