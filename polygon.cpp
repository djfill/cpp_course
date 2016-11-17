#include <iostream>
using namespace std;
#include "polygon.h"

int main()
{
	polygon polygon1 = polygon( 6, 6 );  //Give sides_value and length value
	printf("Area of triangle = \t%.2f\n", polygon1.area(60) );
	printf("Base length of triangle = \t%.2f\n", polygon1.base_length(60) );
	printf("Area of polygon = \t%.2f\n", polygon1.polygon_area() );
	printf("Perimeter of polygon = \t%.2f\n", polygon1.perimeter() );
}