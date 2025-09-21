#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>


class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;
public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &src);
    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &rhs);

    void attack(const std::string &target);

    void whoAmI();

};

#endif
