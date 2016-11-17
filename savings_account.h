class savings_account : public bank_account
{
	private:
	double rate;
	public:
	savings_account()
	{
		rate = 1;
	}
	savings_account( double rate_value )
	{
		rate = rate_value;
	}
	savings_account( double initial_balance, double rate_value ) :
	bank_account( initial_balance)
	{
		rate = rate_value;
	}
	void add_interest()
	{
		double interest = get_balance() * rate / 100;
		deposit( interest );
	}
};