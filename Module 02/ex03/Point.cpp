#include "Point.hpp"

Point::Point() : x(0), y(0){}

Point::Point(const float f1, const float f2): x(f1), y(f2){}

Point::Point(const Point &other){
    *this = other;
}

Point &Point::operator=(const Point &other)
{
    if(this != &other)
	{
        *this = other;
	}
	return *this;
}

Point::~Point(){}

std::ostream &	operator<<(std::ostream &o, Point const &rSym) {
	o << "x:(" << rSym.getX() << "); y:(" << rSym.getY() << ");";
	return o;
}

Fixed const	Point::getX() const {
	return this->x;
}

Fixed const	Point::getY() const {
	return this->y;
}