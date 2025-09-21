#include "DiamondTrap.hpp"


int main() {

    DiamondTrap dt("MonsterX");

    std::cout << "\n--- Stats ---" << std::endl;
    std::cout << "Hit Points: " << dt.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << dt.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << dt.getAttackDamage() << std::endl;

    std::cout << "\n--- Attack ---" << std::endl;
    dt.attack("Target1");
    dt.attack("Target2");

    std::cout << "\n--- WhoAmI ---" << std::endl;
    dt.whoAmI();

    std::cout << "\n--- Destructor test ---" << std::endl;
    return 0;
}
