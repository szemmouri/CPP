#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
    _brain = new Brain();
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat::Cat(const Cat &other) : Animal(other) {
    _brain = new Brain(*other._brain);
    type = other.type;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
        type = other.type;
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Meow Meow Meow..." << std::endl;
}
