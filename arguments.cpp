// Command Line Arguments
#include <iostream>
#include <stdarg.h>
using namespace std;

int main( int argc, char *argv[] )
{
	if ( argc != 3 )
	{
		cout << argv[0] << ": Two arguments should be supplied\n" ;
		return 1;
	}
	cout << "First argument: " << argv[1] << endl;
	cout << "Second argument: " << argv[2] << endl;
	return 0;
}