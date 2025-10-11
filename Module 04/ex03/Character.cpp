#include "Character.hpp"

Character::Character(){}

Character::Character(std::string const & n) : name(n) {
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(const Character &other) : name(other.name) {
    for (int i = 0; i < 4; i++)
        inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : 0;
}

Character &Character::operator=(const Character &other) {
    if (this != &other) {
        name = other.name;
        for (int i = 0; i < 4; i++) {
            delete inventory[i];
            inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : 0;
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}

std::string const & Character::getName() const { return name; }

void Character::equip(AMateria* m) {
    if (!m) return;
    for (int i = 0; i < 4; i++) {
        if (!inventory[i]) {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
        inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}
