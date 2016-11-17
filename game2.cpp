#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <fstream>

class game
{
private:
	int guesses;
	char *name;
	vector <string> words;
public:
	// constructor
	game( int guess, char *file )
	{
		guesses = guess;
		name = file;
	}
	//function to create word array
	int create_word_array()
	{
		fstream file;
		bool in_word = false;
		char ch;
		short word_count = 0;
		char word[11];
		string str[100];
		int element = 0;

		file.open( name, ios::in );
		while ( ( ch = file.get() ) != EOF )
		{
			if ( ch != ' ' && ch != '\n' )
			{
				word[ element ] = ch ;
				element++;
				if ( ! in_word )
				{
					in_word = true;
				}
			}
			else
			{
				in_word = false;
				word[element] = '\0';
				str[word_count] = string(word);
				word_count++;
				element=0;
			}
		}
		file.close();
//		cout.width(8);
//		cout << word_count << endl;
		for(int i=0; i < word_count; i++ )
			cout << str[i] << endl;
		return 0;
	}

	//function to get a random number from the word count
	int get_random_number( int);
	// play game
	bool play_game( int );
};

bool numeric ( string str )
{
	int i;
	bool valid = true;
	for( i=0; i < str.length(); i++ )
	{
		if ( str.substr(i,1) < "0" || str.substr(i,1) > "9" )
			valid = false;
	}
	return valid;
}

int main( int argc, char *argv[] )
{

	fstream file;
	if ( argc != 3 )			// Check two arguments are specified.
	{
		cerr << argv[0] << ": Please specify filename and number of guesses.\n" ;
		return 1;
	}
	if ( !numeric(argv[2]) )
	{
		cerr << argv[0] << ": Enter a numeric number of guesses.\n" ;
		return 3;
	}
	file.open( argv[1], ios::in );	// Open the file, output an error 
	if ( ! file )					// if it cannot be opened.
	{
		cerr << argv[0] << ": Error opening file " << argv[1] << endl;
		return 2;
	}
	else file.close();
	
	game game1 = game( atoi(argv[2]), argv[1] );
	game1.create_word_array();
	
	return 0;
}
