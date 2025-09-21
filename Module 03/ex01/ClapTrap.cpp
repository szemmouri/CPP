#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    *this = other;
    std::cout << "ClapTrap copy constructor called for " << name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        hitPoints -= amount;
        if (hitPoints < 0) hitPoints = 0;
        std::cout << "ClapTrap " << name << " takes " << amount
                  << " points of damage! Remaining HP: " << hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " is already destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " repairs itself, regaining "
                  << amount << " hit points! Current HP: " << hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to repair!" << std::endl;
    }
}

std::string ClapTrap::getName() const{
    return name;
}
int ClapTrap::getHitPoints() const{
    return hitPoints;
}

int ClapTrap::getEnergyPoints() const{
    return energyPoints;
}

int ClapTrap::getAttackDamage() const{
    return attackDamage;
}