#include "header.hpp"

int main()
{
    PhoneBook phoneBook;
    string line;

    system("clear");
    std::cout << "Hello! Welcome to your contact manager." << std::endl;
    while (true)
    {
        std::cout << "Enter one cmd: ADD, SEARCH, EXIT : ";
        std::getline(std::cin, line);

        if(!line.compare("ADD"))
            phoneBook.addContact();
        else if(!line.compare("SEARCH"))
            phoneBook.searchContact();
        else if(!line.compare("EXIT"))
            break;
        system("clear");
    }
    return 0;
}