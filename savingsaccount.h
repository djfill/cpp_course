class savings_account : public bank_account
{
	private:
	double rate;
	public:
	savngs_accuont( double initial_balance, double rate_value ) :
	bank_account( initial_balance)
	{
		rate = rate_value;
	}
	void add_interest()
	{
		double interest = get_balance() * rate / 100;
		deposit( interest );
	}
	void deposit( double amount )
	{
		cout << "deposit function in savings_account class/n"
			 << "overrides deposit function in bank_account class./n"
		bank_account::deposit( amount );
		cout << "deposit function in bank_account class has been called"
			 << " to update the balance./n"
	}
};