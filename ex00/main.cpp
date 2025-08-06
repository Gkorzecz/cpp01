#include "Zombie.hpp"

int main(void)
{
    // Heap allocation
    Zombie* zombie = newZombie("Henry");
    zombie->announce();
    delete zombie;

    // Stack allocation
    randomChump("Paul");
    
    return (0);
}