#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;

public:
    Point();
    Point(const float f1, const float f2);
    Point(const Point &other);
    Point &operator=(const Point &other);
    ~Point();

    
    Fixed const	getX() const;
    Fixed const	getY() const;
};

std::ostream &	operator<<(std::ostream &o, Point const &rSym);

#endif