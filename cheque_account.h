#include "bank_account.h"

class cheque_account : public bank_account
{
	private:
	int free_trans;
	double fee;
	short count;
	public:
	cheque_account( double initial_balance, int free_transactions, double transaction_fee ) : 
	bank_account ( initial_balance )
	{
		free_trans = free_transactions;
		fee = transaction_fee;
		count = 0;
	}
	void cash_cheque( double amount )
	{
		if ( count < free_trans )
		{
			withdraw( amount );
		}
		else
		{
			amount = amount + fee;
			withdraw( amount );
		}
		count++;
	}
};