#include "header.hpp"

string PhoneBook::getInput(const string& prompt) {
    string input;
    system("clear");
    std::cout << prompt;
    std::getline(std::cin, input);
    return input;
}

string PhoneBook::truncate(const string& str, size_t width) {
    return str.length() > width ? str.substr(0, width - 1) + "." : str;
}

PhoneBook::PhoneBook() : maxContacts(), currentNumber(0), contactsSize(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() {
    if (currentNumber == 8) currentNumber = 0;

    string firstName = getInput("Enter First Name: ");
    string lastName = getInput("Enter Last Name: ");
    string nickName = getInput("Enter Nick Name: ");
    string phoneNumber = getInput("Enter Phone Number: ");
    string secret = getInput("Enter Darkest Secret: ");

    array[currentNumber].setFirstName(firstName);
    array[currentNumber].setLastName(lastName);
    array[currentNumber].setNickName(nickName);
    array[currentNumber].setphoneNumber(phoneNumber);
    array[currentNumber].setSecret(secret);

    currentNumber++;
    if (contactsSize < 8) contactsSize++;
}

void PhoneBook::searchContact() {
    if (contactsSize == 0) {
        system("clear");
        std::cout << "No contact available! Abort...\n";
        sleep(1);
        return;
    }

    system("clear");
    std::cout << std::left << std::setw(5) << "Index" << "|"
              << std::left << std::setw(10) << "FirstName" << "|"
              << std::left << std::setw(10) << "LastName" << "|"
              << std::left << std::setw(10) << "NickName" << "\n";

    for (int i = 0; i < contactsSize; ++i) {
        std::cout << std::left << std::setw(5) << i << "|"
                  << std::left << std::setw(10) << truncate(array[i].getFirstName()) << "|"
                  << std::left << std::setw(10) << truncate(array[i].getLastName()) << "|"
                  << std::left << std::setw(10) << truncate(array[i].getNickName()) << "\n";
    }

    string ret;
    int index;
    std::cout << "\nType a contact's index to obtain personal information: ";
    std::getline(std::cin, ret);
    index = std::atoi(ret.c_str());

    if (index < 0 || index >= contactsSize) {
        std::cout << "Invalid index! Abort...\n";
        sleep(1);
        return;
    }

    std::cout << "Name: " << array[index].getFirstName() << "\n"
              << "Lastname: " << array[index].getLastName() << "\n"
              << "Nickname: " << array[index].getNickName() << "\n"
              << "Phone number: " << array[index].getphoneNumber() << "\n"
              << "Darkest secret: " << array[index].getSecret() << "\n\n"
              << "Press Enter to continue...";
    std::cin.get();
	std::cin.get();
}
