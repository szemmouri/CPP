#include "Point.hpp"

Point::Point() : x(0), y(0) {}


Point::Point(float const x, float const y) : x(x) , y(y) {}

Point::Point(Point const &other)  : x(other.getX()), y(other.getY()) {}


Point& Point::operator=(const Point& other)
{
	(void)other;
   
   return *this;
}

Point::~Point(){};

float Point::getX(void) const { return this->x.toFloat(); }

float Point::getY(void) const { return this->y.toFloat(); }
