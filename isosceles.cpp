#include <iostream>
using namespace std;
#include "isosceles.h"

int main()
{
	// create a box 'box1' with length=5, width=4, height=3
	isosceles isosceles1 = isosceles( 6 );
	printf("Area of triangle = %.2f\n", isosceles1.area(60) );
	printf("Base length of triangle = %.2f\n", isosceles1.base_length(60) );
	return 0;
}
