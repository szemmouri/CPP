#ifndef WEAPON_H
#define WEAPON_H

#include "iostream"

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string type);

    std::string getType();
    void setType(std::string type);
};

#endif