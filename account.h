class account
{
	private:
	double balance;
	int number;
	public:
	static int lastnum;
	// constructor
	account( double initial_balance )
	{
		balance = initial_balance;
		number = ++lastnum;
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
	// method for getting account number
	int get_number()
	{
		return number;
	}
};