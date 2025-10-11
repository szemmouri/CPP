#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    const int N = 4;
    const Animal* animals[N];

    for (int i = 0; i < N; ++i) {
        if (i < N / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- Deleting animals ---\n" << std::endl;

    for (int i = 0; i < N; ++i)
        delete animals[i];

    std::cout << "\n--- Testing deep copy ---\n" << std::endl;
    Dog dog1;
    dog1.makeSound();

    Dog dog2 = dog1; // copy
    dog2.makeSound();

    return 0;
}
