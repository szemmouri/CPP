#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

class Harl
{
private:
    void debug() const;
    void info() const;
    void warning() const;
    void error() const;

public:
    Harl();
    ~Harl();

    void complain(const std::string &level) const;
};



#endif