#include <math.h>
#define PI 3.14159265358979323846

class rectangle
{
	private:
	double length, width;
	public:
	rectangle ( double length_val, double width_val )
	{
		length = length_val;
		width = width_val;
	}
	double area()
	{
		return length * width;
	}
	double perimeter()
	{
		return 2 * length + 2 * width;
	}
	double diagonal()
	{
		return sqrt( length * length + width * width );
	}
};