class bank_account
{
	private:
	double balance;
	public:
	// default constructor
	bank_account()
	{
		balance = 0;
	}
	// second constructor
	bank_account( double initial_balance )
	{
		balance = initial_balance;
	}
	// method for depositing money
	void deposit( double amount )
	{
		balance = balance + amount;
	}
	// method for withdrawing money
	void withdraw( double amount )
	{
		balance = balance - amount;
	}
	// method for getting a balance
	double get_balance()
	{
		return balance;
	}
};