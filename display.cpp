#include <iostream>
#include <fstream>
using namespace std;

int main( int argc, char *argv[] )
{
	int counta = 0;
	char ch;
	fstream file;

	if ( argc != 2 )
	{
		cerr << argv[0] << ": No filename specified\n" ;
		return 1;
	}
	file.open( argv[1], ios::in );
	if ( ! file )
	{
		cerr << argv[0] << " Error opening file " << argv[1] << endl;
		return 2;
	}
	while ( ! file.eof() )
	{
		file.get( ch );
		cout << ch;
	}
	file.close();
	return 0;
}