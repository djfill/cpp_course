// Use of ternary operator
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Enter the number of apples would you like: ";
	cin >> x;
	cout << "There " << ((x>1)?"are ":"is ") << x << " apple"
		 << ((x>1)?"s":"") << " in your basket." << endl;
}