/*
This program shows how to manipulate elements
of a character array using a pointer
*/
#include <iostream>
using namespace std;

int main()
{
	char phrase[20];
	char *p;
	p = &phrase[2];
	*p = 'k';
	++p;
	*p = 'e';
	++p;
	p = phrase;
	*p = 'M';
	++p;
	*p = 'i';
	cout << phrase << endl;
}