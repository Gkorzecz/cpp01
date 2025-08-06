#include "Zombie.hpp"

Zombie::Zombie() : name()
{}

Zombie::Zombie(const std::string &n) : name(n)
{}


Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " has been destroyed." << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << this->name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
