#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "str: " << &str << std::endl;
    std::cout << "PTR: " << stringPTR << std::endl;
    std::cout << "REF: " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "str: " << str << std::endl;
    std::cout << "PTR: " << *stringPTR << std::endl;
    std::cout << "REF: " << stringREF << std::endl;

    return 0;
}
