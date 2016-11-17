#include <iostream>
#include <cstring>
#include "validate.h"
using namespace std;

void main()
{
	char input[10];
	
	cout << "Enter an integer: ";
	cin >> input;
	if ( validate::integer( input ) )
		cout << input << " is as integer." << endl;
	else
		cout << input << " is not an integer." << endl;

	cout << "Enter name: ";
	cin >> input;
	if ( validate::alphabetic( input ) )
		cout << input << " is alphabetic." << endl;
	else
		cout << input << " is not alphabetic." << endl;
		cout << "Enter name: ";
	
	cin >> input;
	if ( validate::real( input ) )
		cout << input << " is a real number." << endl;
	else
		cout << input << " is not a real number." << endl;
}