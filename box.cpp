#include <iostream>
using namespace std;
#include "box.h"

int main()
{
	// create a box 'box1' with length=5, width=4, height=3
	box box1 = box( 5, 4, 3);
	printf("Area of rectangle = %.2f\n", box1.area());
	printf("Perimeter of rectangle = %.2f\n", box1.perimeter());
	printf("Diagonal of rectangle = %.2f\n", box1.diagonal());
	printf("Volume of box1 = %.2f\n", box1.volume());
	printf("Surface Area of box1 = %.2f\n", box1.surface_area());
	printf("Body Diagonal of box1 = %.2f\n", box1.body_diagonal());
	printf("Angle of box1 = %.2f\n", box1.angle());
	return 0;
}