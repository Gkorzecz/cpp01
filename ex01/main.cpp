#include "Zombie.hpp"
#include <cstdlib>

int main(int argc, char *argv[])
{
    

    if (argc != 3)
    {
        std::cout << "Wrong number of arguments, expect : [1] a number of zombie, [2] a name." << std::endl;
        return (0);
    }

    std::string numOfZomb(argv[1]);
    std::string zombiename(argv[2]);
    for (std::string::size_type i = 0; i < numOfZomb.size(); ++i)
    {
        if (!std::isdigit(numOfZomb[i]))
        {
            std::cout << "Only accept digit." << std::endl;
            return (-1);
        }
    }
    if (numOfZomb.size() > 5)
    {
        std::cout << "Do you really need this much zombies ?" << std::endl;
        return(-1);
    }
    int numberofzombie = std::atoi(numOfZomb.c_str());
    Zombie* horde = zombieHorde(numberofzombie, zombiename);
    for (int i = 0; i < numberofzombie; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}