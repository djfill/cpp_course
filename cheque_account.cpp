#include <iostream>
using namespace std;
#include "cheque_account.h"

int main()
{
	unsigned short i;
	// create new cheque account for Simon
	cheque_account simon = cheque_account( 1000, 4, 2 );
	cout << "Simons balance is: "<< simon.get_balance() << endl;
	for ( i=0; i < 8; i++)
	{
		simon.cash_cheque( 100 );
		cout << "Simons balance is: "<< simon.get_balance() << endl;
	}
	// create new cheque account for Tracey
	cheque_account tracey = cheque_account( 1500, 4, 2 );
	cout << "Tracey balance is: "<< tracey.get_balance() << endl;
	for ( i=0; i < 8; i++)
	{
		tracey.cash_cheque( 100 );
		cout << "Tracey balance is: "<< tracey.get_balance() << endl;
	}
	// create new cheque account for Bill
	cheque_account bill = cheque_account( 1500, 4, 2 );
	cout << "Billys balance is: "<< bill.get_balance() << endl;
	for ( i=0; i < 8; i++)
	{
		bill.cash_cheque( 100 );
		cout << "Billys balance is: "<< bill.get_balance() << endl;
	}
return 0;
}