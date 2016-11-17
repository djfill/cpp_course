#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>

class game
{
private:
	int guesses;
	char *filename;
	vector <string> words;
	int word_length, words_size;
	string rand_word;
public:
	// constructor
	game( int guess, char *file )
	{
		guesses = guess;
		filename = file;
	}
	//function to create word array
	int create_word_array()
	{
		fstream file;
		bool in_word = false;
		char ch;
		vector <char> word;
		words_size = 0;

		file.open( filename, ios::in );
		while ( ( ch = file.get() ) != EOF )
		{
			if ( ch != ' ' ) //&& ch != '\n' )
			{
				ch = tolower(ch);
				word.push_back( ch );
				if ( ! in_word )
				{
					in_word = true;
				}
			}
			else
			{
				in_word = false;
				word.push_back( '\0' );
				cout << word[0];
				words.push_back(string (word.begin(),word.end()));
				word.clear();
				words_size++;
				printf("\n%d\t", words_size);
			}
		}
		file.close();
		return 0;
	}
	//function to get a random number from the word count
	int get_random_number()
	{
		word_length = 0;
		int num = 0;
		srand( time(NULL) );
		num = rand() % ( words_size );
		rand_word = words[num];
		word_length = rand_word.length() -1;
		printf("\nwords_size=%d\tnum=%d\tword_length=%d\tvwords_size=%lu\n",words_size,num,word_length,words.size());
		return 0;
	}
	// play game
	bool play_game()
	{
		bool success = false;
		vector <char> hash;
		vector <char> history;
		char letter;
		int count;
		for ( int i=0; i < word_length; i++)
			hash.push_back( '*' );
		while ( guesses != 0 )
		{
			for( unsigned int i=0; i < hash.size(); i++)
			{
				cout << hash[i];
			}
			printf("\nEnter a guess\n");
			cin >> letter;
			if ( isalpha(letter) )
			{
				count = 0;
				letter = tolower(letter);
				for ( unsigned int l=0; l < history.size(); l++ )
				{
					if ( letter == history[l] )
					{
						cout << "You have already tried this letter, please try another." << endl;
						guesses++;
						break;
					}				
				} 
				for( int i=0; i < word_length; i++)
					if ( letter == rand_word[i] )
					{
						hash[i] = letter;
					}
				for ( unsigned int i=0; i < hash.size(); i++ )
				{
					if ( hash[i] == rand_word[i] )
						count++;
				}
				if ( count == hash.size() )
				{
					for( unsigned int i=0; i < hash.size(); i++)
					{
						cout << hash[i];
					}
					cout << endl;
					success = true;
					return success;
				}
				guesses--;
				history.push_back(letter);
			}
			else cout << "\nPlease enter an alphabetic letter.\n";
		}
		return success;
	}
};

bool numeric ( string str )
{
	bool valid = true;
	for( unsigned int i=0; i < str.length(); i++ )
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
	game1.get_random_number();
	if (game1.play_game()) cout << "Well Done" << endl;
	else cout << "Hard Luck" << endl;
	
	return 0;
}
