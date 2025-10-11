#include "Dog.hpp"

Dog::Dog() : Animal() {
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    _brain = new Brain();
}

Dog::~Dog() {
        std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog::Dog(const Dog &other) : Animal(other) {
    _brain = new Brain(*other._brain);
    type = other.type;

}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
        type = other.type;
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Woof Woof Woof..." << std::endl;
}
