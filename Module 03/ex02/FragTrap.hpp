#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap &src);
    ~FragTrap();

    FragTrap & operator=(const FragTrap &rhs);
    
    void attack(const std::string &target);
    void highFivesGuys(void) const;
};

#endif
