#include <fstream>
#include <iostream>
using namespace std;
#include <stdarg.h>
#include <string>

int main( int argc, char *argv[] )
{
	char ch;
	short word_count;
	bool in_word;
	fstream file;

	word_count=0;

	if ( argc < 2 )
	{
		cerr << argv[0] << ": Enter a file name.\n" ;
		return 1;
	}
	file.open( argv[1], ios::in );	// Open the file, output an error 
	if ( ! file )					// if it cannot be opened.
	{
		cerr << argv[0] << ": Error opening file " << argv[1] << endl;
		return 2;
	}

	in_word=false;

	while ( ( ch = file.get() ) != EOF )
	{
		if ( ch != ' ' && ch != '\n' )
		{
			if ( ! in_word)
			{
				in_word = true;
				cout << "in word?  " << ch << endl;
			}
		}
		else
		{
			word_count++;
			cout << "ch=" << ch << endl;
			in_word = false;
		}
	}
	file.close();
	cout << word_count << endl;
	return 0;
}