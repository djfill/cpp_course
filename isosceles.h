#include <math.h>
#define PI 3.14159265358979323846

class isosceles
{
	private:
	double length;
	public:
	isosceles( double length_value )
	{
		length = length_value;
	}
	double area( double angle )
	{
		return 0.5 * length * length * sin ( angle * PI / 180 );
	}
	double base_length ( double angle )
	{
		return 2 * length * sin( ( angle / 2 ) * PI / 180 );
	}
};