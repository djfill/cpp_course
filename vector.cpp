//Vectors
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//Create zero length vector
	vector <int> v;
	int i;
	//Display size of v
	cout << "Size = " << v.size() << endl;
	// Append values to vector, growing the vector v
	for ( i=0; i<10; i++ )
		v.push_back(i);  // grow size of v to 10
	//Display size of v
	cout << "Size = " << v.size() << endl;
	//Display contents of v
	for ( i=0; i < v.size(); i++ )
		cout << v[i] << " ";
	cout << endl;

	//Append more values to vector v
	for ( i=0; i<10; i++ )
		v.push_back(i+10);
	//Display size of v
	cout << "Size = " << v.size() << endl;
	//Display contents of v
	for ( i=0; i < v.size(); i++ )
		cout << v[i] << " ";
	cout << endl;

	//Change contents of vector v
	for ( i=0; i<v.size(); i++ )
		v[i] = v[i] + v[i];
	//Display contents of v
	for ( i=0; i < v.size(); i++ )
		cout << v[i] << " ";
	cout << endl;

	return 0;
}