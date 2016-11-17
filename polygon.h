#include "isosceles.h"

class polygon : public isosceles
{
	private:
	double sides, length;
	public:
	polygon ( double sides_val, double length_val ) : 
	isosceles( length_val )
	{
		sides = sides_val;
		length = length_val;
	}
	double polygon_area()
	{
		double poly_area = area( 360 / sides ) * sides;
		return poly_area;
	}
	double perimeter()
	{
		double perim = base_length( 360 / sides ) * sides;
		return perim;
	}
};