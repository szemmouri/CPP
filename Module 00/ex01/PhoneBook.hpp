#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "header.hpp"

class	PhoneBook {
private:
    const	int	maxContacts;
    int			currentNumber;
    int			contactsSize;
    Contact		array[8];
    string getInput(const string& prompt);
    string truncate(const string& str, size_t width = 10);
    
public:
    PhoneBook();
    ~PhoneBook();

    void	addContact();
    void	searchContact();

};

#endif