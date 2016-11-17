//Use of string functions

#include <iostream>
using namespace std;

#include <stdarg.h>
#include <cstring>

int main ( int argc, char *argv[] )
{
	int length, element;
	char letter = 'a';
	if ( argc != 3)
	{
		cout << argv [0] << ": Two arguments should be supplied." << endl;
		return 1;
	}
	length=strlen( argv[1] );
	cout << "String '" << argv[1] 
		 << "' contains " << length
		 << " characters." << endl;
	cout << strchr( argv[1], letter )  - argv[1] << endl;
	cout << strchr( argv[1], letter ) << endl;
	if ( ( strchr( argv[1] , letter ) ) != NULL )
	{
		element = strchr( argv[1], letter ) - argv[1] ;
		element++;
		cout << "Letter ' " << letter
			 << " is first found at character "
			 << element << " in string '"
			 << argv[1] << "'\n"
			 << "when searching forwards\n";
	}
	else
		cout << "Letter ' " << letter
			 << " ' not found in string ' "
			 << argv[1] << " '\n";
	if ( ( strcmp( argv[1], argv[2] ) ) != 0 )
		cout << "String ' " << argv[1]
			 << " ' is different from string ' "
			 << argv[2] << " ' \n";
	else
		cout << "Strings are identical\n";
	return 0;
}