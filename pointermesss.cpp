/*
This program shows how to manipulate elements
of a character array using a pointer
*/
#include <iostream>
using namespace std;

int main()
{
	char phrase[20];
	char *p1, *p2, *p3, *p4, *p5;
	p1 = &phrase[1];
	p2 = &phrase[2];
	p3 = &phrase[3];
	p4 = &phrase[4];
	p5 = &phrase[5];
	*p1 = 'M';
	*p2 = 'i';
	*p3 = 'k';
	*p4 = 'e';
	*p5 = '\0';
	cout << phrase << endl;
}