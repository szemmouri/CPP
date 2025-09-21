#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(5, "lol");

    delete [] zombie;
    return 0;
}