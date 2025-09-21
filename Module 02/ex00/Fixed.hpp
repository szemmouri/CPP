#ifndef FIXED_HPPC
#define FIXED_HPPC

#include <iostream>

class Fixed
{
private:
    int _value;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};



#endif