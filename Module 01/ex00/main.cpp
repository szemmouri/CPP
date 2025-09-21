#include "Zombie.hpp"

int main()
{
    Zombie *zombie = NULL;

    zombie = zombie->newZombie("sos");
    zombie->randomChump("bak");

    delete zombie; 
    return 0;
}