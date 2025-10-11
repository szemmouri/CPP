#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "=== Correct polymorphism ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound(); // Meow
    j->makeSound(); // Woof
    meta->makeSound(); // Generic animal

    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== Wrong polymorphism ===" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << std::endl;
    wrongCat->makeSound(); // Will call WrongAnimal::makeSound()
    wrong->makeSound();

    delete wrong;
    delete wrongCat;

    return 0;
}
