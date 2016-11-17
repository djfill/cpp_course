#include <iostream>
using namespace std;
#include <string>

string str1;

int getinput()
{
	cout << "Enter a string: ";
	char ch;
	char input[11];
	unsigned short i = 0;
	cin.get ( ch );
	while ( ch != '\n' )
	{
		if ( i < 10 )
		{
			input[i] = ch;
		}
		else
		{
			cout << "String too long";
			return 0;
		}
		i++;
		cin.get( ch );
	}
	if ( i < 11 ) 
		input[i] = '\0';
	//cout << input << endl;
	str1 = input;
	return 0;
}

bool alphabetic( string str )
{
	int i;
	bool valid = true;
	for( i=0; i < str.length(); i++ )
	{
		if ( ( str.substr(i,1) < "A" || str.substr(i,1) > "Z" ) &&
			 ( str.substr(i,1) < "a" || str.substr(i,1) > "z" ) )
		valid = false;
	}
	return valid;
}

//bool palindrome( string str )
//{
	
//}

int main()
{
	getinput(); //Get a string up to 10 chars long and assign to string str1.
	if ( alphabetic( str1 )) //Check the string is alphabetic and exit if not.
	{
//		if ( palindrome( str1 )) cout << "String is a palindrome.\n";
//		else cout << "String is not a palindrome."
		cout << str1 << endl;
		return 0;
	}
	else
	cout << "Invaild input\n";
	return 1;
}

