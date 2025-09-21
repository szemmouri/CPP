#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie
{
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();

    void announce( void ); 
    void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif