#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie = newZombie("Henry");
    zombie->announce();
    delete zombie;
    
    randomChump("Paul");
    
    return (0);
}