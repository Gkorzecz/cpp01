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
    if (numOfZomb.empty() || zombiename.empty())
    {
        std::cout << "Empty string in input." << std::endl;
        return (-1);
    }
    for (size_t i = 0; i < numOfZomb.size(); i++)
    {
        if (!std::isdigit(numOfZomb[i]))
        {
            std::cout << "First argument only accept digit." << std::endl;
            return (-1);
        }
    }
    if (numOfZomb.size() > 10)
    {
        std::cout << "Do you really need this much zombies (Max : 1000)?" << std::endl;
        return(-1);
    }
    int numberofzombie = std::atoi(numOfZomb.c_str());
    if (numberofzombie < 0 || numberofzombie > 1000)
    {
        std::cout << "Do you really need this much zombies (Max : 1000)?" << std::endl;
        return (-1);
    }
    Zombie* horde = zombieHorde(numberofzombie, zombiename);
    for (int i = 0; i < numberofzombie; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}