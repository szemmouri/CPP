#include "ClapTrap.hpp"

int main() {
    ClapTrap bot1("Said");
    ClapTrap bot2("Jhon");

    bot1.attack("dummy target");
    bot1.takeDamage(3);
    bot1.beRepaired(5);

    bot2.attack("Said");
    bot2.takeDamage(15);
    bot2.beRepaired(4);


    // ClapTrap bot3 = bot1;
    ClapTrap bot3(bot1);
    bot3.attack("Jack");


    bot2 = bot1;
    bot2.attack("Boll");

    return 0;
}
