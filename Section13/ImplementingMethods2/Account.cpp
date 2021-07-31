#include "Account.h"

void Account::set_name(std::string value){
	name = value;
}

std::string Account::get_name(){
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