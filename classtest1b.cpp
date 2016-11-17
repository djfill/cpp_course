#include <iostream>
using namespace std;

int main()
{
	int inum1, inum2, inum3;
	int inum = 27;
	double dnum1, dnum2, dnum3;
	double dnum = 17.85;
	dnum1 = (double) inum / 5 + ( 3 * inum ) / 4;
	dnum2 = inum / 5 + ( 3.0 * inum ) / 4 ;
	dnum3 = (double) ( inum / 5 + ( inum / 4 ) );
	inum1 = (int) dnum * 10 + 1;
	inum2 = inum << 2;
	inum3 = inum >> 3;
	cout << "dnum1 = " << dnum1 << endl
		 << "dnum2 = " << dnum1 << endl
		 << "dnum3 = " << dnum1 << endl
		 << "inum1 = " << inum1 << endl
		 << "inum2 = " << inum2 << endl
		 << "inum3 = " << inum3 << endl;

	printf ("dnum 1 = ")
	return 0;
}