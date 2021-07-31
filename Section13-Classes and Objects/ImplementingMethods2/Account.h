#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account {
private:
	std::string name;
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
	void set_name(std::string value);
	std::string get_name();
	
	bool deposit(double value);
	bool withdraw(double value);
};

#endif // _ACCOUNT_H_
