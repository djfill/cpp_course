#include "rectangle.h"

class box : public rectangle
{
	private:
	double height, length, width;
	public:
	box ( double length_val, double width_val, double height_value) :
	rectangle( length_val, width_val )
	{
		height = height_value;
		length = length_val;
		width = width_val;
	}
	double volume()
	{
	   double vol = pow (length, 3);
	   return vol;
	}
	double surface_area()
	{
		double surf_area = 2 * area() + perimeter() * height;
		return surf_area;
	}
	double body_diagonal()
	{
	   double diag = length * sqrt(3);
	   return diag;
	}
	double angle()
	{
	   double angle = ( asin ( length / body_diagonal() ) ) * ( 180 / PI );
	   return angle;
	}
};