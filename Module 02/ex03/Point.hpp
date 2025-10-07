#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"



class Point
{

	Fixed const x;
	Fixed const y;

public :

	Point();
	Point(Point const &other);
	Point(float const x, float const y);
	~Point();

	Point&	operator=(Point const &src);

	float getX(void)	const;
	float getY(void)	const;

};

#endif