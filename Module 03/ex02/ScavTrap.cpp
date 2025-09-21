#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) 
    : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << "ScavTrap constructor called for " 
              << this->name << " and his attack damage is: " 
              << this->attackDamage << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    *this = other;
}


ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " Died." << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const &other) {
	if (this != &other) {
		this->name = other.getName();
		this->hitPoints = other.getHitPoints();
		this->energyPoints = other.getEnergyPoints();
		this->attackDamage = other.getAttackDamage();
	}
	return *this;
}


void ScavTrap::attack(const std::string &target) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        this->energyPoints--;
        std::cout << "ScavTrap " << this->name 
                  << " goes for broke on " << target 
                  << ", causing " << this->attackDamage 
                  << " attack damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << this->name 
                  << " has no energy or hit points left to attack!" << std::endl;
    }
}

void	ScavTrap::guardGate() const {
	std::cout << "ScavTrap " << this->name << " enter in protected mode !" << std::endl;
}