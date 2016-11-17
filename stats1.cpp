#include <iostream>
#include <fstream>
using namespace std;

int main( int argc, char *argv[] )
{
	int count = 0;
	char ch, A, a;
	unsigned short int i, nums[25];
	fstream file;
	for ( i = 0; i <= 25; i++ ) // Setting nums array vaules to 0.
	{							// I don't know why i need to do this,
		nums[i] = 0;			// it seems silly, but I'm probably not doing
	}							// something right.
	if ( argc != 2 )
	{
		cerr << argv[0] << ": No filename specified\n" ;
		return 1;
	}
	file.open( argv[1], ios::in );
	if ( ! file )
	{
		cerr << argv[0] << ": Error opening file " << argv[1] << endl;
		return 2;
	}
	
	while ( ! file.eof() )
	{
		file.get ( ch );
		for ( i = 0, A = 65, a = 97; A <= 90 && a <= 122; A++, a++, i++ )
		{
			if ( ch == A || ch == a ) nums[i] = nums[i] + 1;	
		}
	}
	cout << "Letter\tFrequency\n";
	for ( i = 0, A = 65; i <= 25; i++, A++ )
	{
		cout.width(3);
		cout << A << "\t";
		cout.width(6);
		cout << nums[i] << endl;
	}
}