#include <iostream>
using namespace std;
#include <string>

string str1;

bool getinput()
{
	cout << "Please enter string> ";
	char ch;
	char input[11];
	unsigned short i = 0;
	bool valid = true;
	cin.get ( ch );
	while ( ch != '\n' )
	{
		if ( i < 10 )
		{
			input[i] = ch;
		}
		else
		{
			cout << "String too long\n";
			valid = false;
			return valid;
		}
		i++;
		cin.get( ch );
	}
	if ( i < 11 ) 
		input[i] = '\0';
	str1 = input;
	valid = true;
	return valid;
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

bool palindrome( string str )
{
	bool valid = true;
	unsigned short i, y = str.length();
	y--;
	for (i=0; y>=i; i++, y--)
	{
		if ( str.substr(i,1) != str.substr(y,1) )
		{
			valid = false;
			return valid;
		}
		else
		{
			valid = true;
		}
	}
	return valid;
}

int main()
{
	if ( !getinput() ) return 1; //Get a string up to 10 chars long and assign to string str1.
	if ( !alphabetic( str1 )) //Check the string is alphabetic and exit if not.
	{
		cout << "Invalid input\n";
		return 1;
	} 
	else
	{
		if ( palindrome( str1 )) cout << "String is a palindrome\n";
		else cout << "String is not a palindrome\n";
		return 0;
	}
}

