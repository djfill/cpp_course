//Insertion and deltion of elements part 2
#include <iostream>
#include <iomanip>
#include <vector>
#include "account.h"
using namespace std;


int account::lastnum = 1999;
int main()
{
	// Display zero length vector
	vector <account> v;
	int i;
	// Check for empty vector
	if ( v.empty() )
		cout << "Vector is empty" << endl;
	//Display size of vector v
	cout << "Size = " << v.size() << endl;

	// Append ten bank accounts to vector
	for ( i=0; i<10; i++ )
	{
		account act = account( 500 + i*100 );
		v.push_back( act );
	}
	//Display size of vector v
	cout << "Size = " << v.size() << endl;
	//Display details of ten bank accounts
	for ( i=0; i<v.size(); i++ )
	{
		cout << "Account no: " << setw(5)
			 << v[i].get_number() << "\t"
			 << "Balance: " << setw(4)
			 << v[i].get_balance() << endl;
	}

	//Check for empty vector
	if ( v.empty() )
		cout << "Vector is empty" << endl;
	else
		cout << "Vector is not empty" << endl;
	//Remove all vector elements
	v.clear();
	//Display size of vector v
	cout << "Size = " << v.size() << endl;
	//Check for empty vector
	if ( v.empty() )
		cout << "Vector is empty" << endl;
	else
		cout << "Vector is not empty" << endl;
	//Remove all vector elements

	return 0;
}