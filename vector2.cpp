//Vectors - Insertion and deletion of elements
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//Create zero length vector
	vector <char> v;
	int i;
	//Display size of v
	cout << "Size = " << v.size() << endl;
	//Apend values to vector v
	for ( i=0; i<10; i++ )
		v.push_back( 'A' + i );
	//Display size and contents of vector v
	cout << "Size = " << v.size() << endl;
	for ( i=0; i<v.size(); i++ )
		cout << v[i] << " ";
	cout << endl << endl;
	
	//Address third element of vector v
	vector <char>::iterator p = v.begin();
	p += 2;
	//Insert 10 X's into vector v
	v.insert( p, 10, 'X' );
	//Display size and contents after insertion
	cout << "Size = " << v.size() << endl;
	for ( i=0; i<v.size(); i++ )
		cout << v[i] << " ";
	cout << endl << endl;

	//Remove 10 X's from v
	p = v.begin();
	p += 2;
	v.erase( p, p+10 );
	//Display size and contents after deletion
	cout << "Size = " << v.size() << endl;
	for ( i=0; i<v.size(); i++ )
		cout << v[i] << " ";
	cout << endl << endl;

	p = v.end();
//	cout << v.end() << endl;
	p -= 2;
	v.erase( p, p+2 );
	//Display size and contents after deletion
	cout << "Size = " << v.size() << endl;
	for ( i=0; i<v.size(); i++ )
	cout << v[i] << " ";
	cout << endl << endl;


	return 0;
}