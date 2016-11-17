// Check for valid numeric data
#include <iostream>
using namespace std;
#include <cstring>

bool numeric( char *string )
{
	int index;
	bool valid = true;
	for ( index = 0; index < strlen( string ); index++ )
	{
		if ( string[ index ] < 48 || string[ index ] > 57 )
			valid = false;
	}
	return valid;
}

int main()
{
	char input[4];
	cout << "Enter number> ";
	cin >> input;
	if ( numeric( input) )
		cout << " ' " << input << " ' is numeric." << endl;
	else
		cout << " ' " << input << " ' is not numeric." << endl;
}