#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) 
    : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    std::cout << "FragTrap constructor called for " 
              << this->name << " and his attack damage is: " 
              << this->attackDamage << std::endl;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    *this = other;
}


FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " Died." << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const &other) {
	if (this != &other) {
		this->name = other.getName();
		this->hitPoints = other.getHitPoints();
		this->energyPoints = other.getEnergyPoints();
		this->attackDamage = other.getAttackDamage();
	}
	return *this;
}


void FragTrap::attack(const std::string &target) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        this->energyPoints--;
        std::cout << "FragTrap " << this->name 
                  << " goes for broke on " << target 
                  << ", causing " << this->attackDamage 
                  << " attack damage!" << std::endl;
    } else {
        std::cout << "FragTrap " << this->name 
                  << " has no energy or hit points left to attack!" << std::endl;
    }
}

void	FragTrap::highFivesGuys() const {
	std::cout << "FragTrap " << this->name << " is requesting a high five!" << std::endl;
}