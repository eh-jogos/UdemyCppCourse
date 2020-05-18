#include <iostream>
#include <string>

using namespace std;


class Account {
private:
	string name;
	double balance;
	
public:
	//methods
	// declared inline
	void set_balance(double value) { balance = value; }
	// will be compiled as inline
	double get_balance() {
		return balance;
	}
	
	// prototypes for methods that will be declared outside class declaration
	void set_name(string value);
	string get_name();
	
	bool deposit(double value);
	bool withdraw(double value);
};


void Account::set_name(string value){
	name = value;
}

string Account::get_name(){
	return name;
}

bool Account::deposit(double value){
	// if verify amount
	balance += value;
	return true;
}


bool Account::withdraw(double value){
	if (balance-value >= 0){
		balance -= value;
		return true;
	} else {
		return false;
	}
}


int main()
{
	Account frank_account;
	frank_account.set_name("Frank's Account");
	frank_account.set_balance(1000.0);
	
	if (frank_account.deposit(200.0))
		cout << "Deposit OK" << endl;
	else
		cout << "Deposit Not Allowed" << endl;
	
	if (frank_account.withdraw(500.0))
		cout << "Withdraw OK" << endl;
	else
		cout << "Not enough funds" << endl;
	
	if (frank_account.withdraw(1500.0))
		cout << "Withdraw OK" << endl;
	else
		cout << "Not enough funds" << endl;
	
	return 0;
}
