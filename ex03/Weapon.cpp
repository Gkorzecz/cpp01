#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string &initType) : type_(initType)
{}

Weapon::~Weapon()
{
    std::cout << "Weapon has been destroyed." << std::endl;
}

void Weapon::setType(const std::string& type)
{
    this->type_ = type;
}

const std::string& Weapon::getType() const
{
    return (type_);
}