#include "FragTrap.hpp"

int main() {
    std::cout << "=== Creating FragTrap Bravo ===" << std::endl;
    FragTrap fragA("Bravo");

    std::cout << "\n=== Testing attack ===" << std::endl;
    fragA.attack("Enemy1");
    fragA.attack("Enemy2"); 

    std::cout << "\n=== Testing highFivesGuys ===" << std::endl;
    fragA.highFivesGuys();

    std::cout << "\n=== Testing copy constructor ===" << std::endl;
    FragTrap fragB(fragA); 
    fragB.attack("Enemy3");

    std::cout << "\n=== Testing assignment operator ===" << std::endl;
    FragTrap fragC("Charlie");
    fragC = fragA;
    fragC.attack("Enemy4");

    std::cout << "\n=== Testing energy depletion ===" << std::endl;
    for (int i = 0; i < 105; i++) {
        std::cout << i << ": ";
        fragA.attack("Dummy"); 
    }

    std::cout << "\n=== Exiting main, destructors will be called ===" << std::endl;
    return 0;
}
