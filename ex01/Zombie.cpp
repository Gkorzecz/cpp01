#include "Zombie.hpp"

Zombie::Zombie() : _name()
{}

Zombie::Zombie(const std::string &name) : _name(name)
{}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " has been destroyed." << std::endl;
}

void Zombie::setName(const std::string& name)
{
    this->_name = name;
}

void Zombie::announce(void) const
{
    std::cout << this->_name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}