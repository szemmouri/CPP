#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie
{
private:
    std::string _name;
    void announce( void ); 

public:
    Zombie(std::string name);
    ~Zombie();

    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
};

#endif