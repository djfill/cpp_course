#include <iostream>
using namespace std;

#include "bank_account.h"
#include "savings_account.h"

int main()
{
	//open a new savings account for simon
	savings_account simon = savings_account( 500, 7 );
	//add yearly interest to simons acconut
	simon.add_interest();
	//display simons end of year balance
	cout << "Balance in simons account is £"
		 << simon.get_balance() << endl;
	return 0;
}
