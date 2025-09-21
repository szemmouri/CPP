#ifndef CONTACT_H
#define CONTACT_H

#include "header.hpp"

class	Contact {
private:
    string	firstName;
    string	lastName;
    string	nickName;
    string  phoneNumber;
    string	secret;


public:
    Contact();
    ~Contact();

    void	setFirstName(string firstName);
    void	setLastName(string lastName);
    void	setNickName(string nickName);
    void	setphoneNumber(string phoneNumber);
    void	setSecret(string secret);
    string	getFirstName() const;
    string	getLastName() const;
    string	getNickName() const;
    string	getphoneNumber() const;
    string	getSecret() const;
};

#endif