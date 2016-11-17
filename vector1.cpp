//Vectors
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Create zero length char vector v
	vector <char> v;
	int i;

	//Display size of v
	cout << "Size = " << v.size() << endl;
	// Append values to vector
	for ( i=0; i<10; i++ )
		v.push_back( 'A' + i );
	//Display size of v
	cout << "Size = " << v.size() << endl;
	//Access contents of v using subscripts
	for ( i=0; i<v.size(); i++ )
		cout << v[i] << " ";
	cout << endl;

	//Access contents of v using iterator
	vector <char>::iterator p = v.begin();
	while ( p != v.end() )
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
	return 0;
}