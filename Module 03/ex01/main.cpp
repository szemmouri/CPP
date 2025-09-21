#include "ScavTrap.hpp"

int main() {
    std::cout << "=== Creating ScavTrap Said ===" << std::endl;
    ScavTrap scavA("Said");

    std::cout << "\n=== Testing attack ===" << std::endl;
    scavA.attack("Enemy1");
    scavA.attack("Enemy2");

    std::cout << "\n=== Testing guardGate ===" << std::endl;
    scavA.guardGate();

    std::cout << "\n=== Testing copy constructor ===" << std::endl;
    ScavTrap scavB(scavA);
    scavB.attack("Enemy3");

    std::cout << "\n=== Testing assignment operator ===" << std::endl;
    ScavTrap scavC("Charlie");
    scavC = scavA;
    scavC.attack("Enemy4");

    std::cout << "\n=== Testing energy depletion ===" << std::endl;
    for (int i = 0; i < 55; i++) {
        scavA.attack("Dummy"); 
    }

    std::cout << "\n=== Exiting main, destructors will be called ===" << std::endl;
    return 0;
}
