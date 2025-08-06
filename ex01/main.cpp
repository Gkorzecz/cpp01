#include "Zombie.hpp"
#include <cstdlib>

int main(int argc, char *argv[])
{
    int numberofzombie;
    std::string zombiename;

    if (argc != 3)
    {
        std::cout << "Wrong number of arguments, expect : [1] a number of zombie, [2] a name." << std::endl;
        return (1);
    }
    numberofzombie = std::atoi(argv[1]);
    zombiename = argv[2];
    Zombie* horde = zombieHorde(numberofzombie, zombiename);
    for (int i = 0; i < numberofzombie; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}