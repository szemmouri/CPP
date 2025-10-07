#include "Point.hpp"

float	sign(Point const &p1, Point const &p2, Point const &p3)
{
    return	(p1.getX() - p3.getX())
		*	(p2.getY() - p3.getY())
		-	(p2.getX() - p3.getX())
		*	(p1.getY() - p3.getY());
}

/*
	LEFT  = POSITIVE (+)
	RIGHT = NEGATIVE (-)
*/

/*
	A point is INSIDE the triangle when

	All signs are POSITIVE 

	OR

	All signs are NEGATIVE 

*/



bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
    bool has_neg, has_pos;

	d1 = sign(point, a, b);
	if (d1 == 0) return false;
	
    d2 = sign(point, b, c);
	if (d2 == 0) return false;
	
    d3 = sign(point, c, a);
	if (d3 == 0) return false;
	
	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);


	return !(has_neg && has_pos);
}
