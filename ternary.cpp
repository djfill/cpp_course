// Use of ternary operator
#include <iostream>
using namespace std;

int main()
{
	int z, x = 5, y = -10;
	cout << "Value of x is " << x << endl;
	cout << "Value of y is " << y << endl;
	z = x >= 0 ? x : -x;
	cout << "Absolute value of x is " << z << endl;
	z = y >= 0 ? y : -y;
	cout << "Absolute value of y is " << z << endl;
}