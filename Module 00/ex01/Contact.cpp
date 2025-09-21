#include "header.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void	Contact::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void	Contact::setLastName(string lastName)
{
    this->lastName = lastName;
}

void	Contact::setNickName(string nickName)
{
    this->nickName = nickName;
}

void	Contact::setphoneNumber(string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void	Contact::setSecret(string secret)
{
    this->secret = secret;
}

string	Contact::getFirstName() const
{
    return this->firstName;
}

string	Contact::getLastName() const
{
    return this->lastName;
}

string	Contact::getNickName() const
{
    return this->nickName;
}

string	Contact::getphoneNumber() const
{
    return this->phoneNumber;
}

string	Contact::getSecret() const
{
    return this->secret;
}