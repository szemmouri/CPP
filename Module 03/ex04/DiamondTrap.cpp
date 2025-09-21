#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string n)
    : ClapTrap(n + "_clap_name"), FragTrap(n), ScavTrap(n), name(n)
{
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;

    std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
    : ClapTrap(src.ClapTrap::name), FragTrap(src), ScavTrap(src), name(src.name)
{
    hitPoints = src.hitPoints;
    energyPoints = src.energyPoints;
    attackDamage = src.attackDamage;

    std::cout << "DiamondTrap " << name << " copied!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
    if (this != &rhs) {
        ClapTrap::name = rhs.ClapTrap::name;
        name = rhs.name;
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    return *this;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}


void DiamondTrap::whoAmI() {
    std::cout << "I am " << name 
              << ", and my ClapTrap name is " << ClapTrap::name 
              << std::endl;
}
