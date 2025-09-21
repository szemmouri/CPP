#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    this->_name = name;
    std::cout << this->_name << ": Back From The Hell" << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->_name << ": Back To The Hell" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
