#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "A Zombie Back From The Hell" << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->_name << ": Back To The Hell" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}