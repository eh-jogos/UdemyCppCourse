#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
 * Ask integer in cents
 * 
 * divide integer with value of dollars in cents, save it and get the remainder with modulo
 * do the same with the value in quarters
 * same for dimes
 * same for nickels
 * the last modulo result is the value in cents
 * 
 * show the result
 * 
 */
 
int main(){
	int const dollar_to_cents {100}, quarter_to_cents {25}, dime_to_cents {10}, nickel_to_cents {5};
	int dollars {}, quarters {}, dimes {}, nickels {}, cents {};
	int change_in_cents {};
	
	cout << "Enter the change value in cents: ";
	cin >> change_in_cents;
	
	// Solution with modulo
	dollars = change_in_cents / dollar_to_cents;
	change_in_cents %= dollar_to_cents;
	quarters = change_in_cents / quarter_to_cents;
	change_in_cents %= quarter_to_cents;
	dimes = change_in_cents / dime_to_cents;
	change_in_cents %= dime_to_cents;
	nickels = change_in_cents / nickel_to_cents;
	cents = change_in_cents % nickel_to_cents;
	
	// Solution without modulo
//	dollars = change_in_cents / dollar_to_cents;
//	change_in_cents -= dollars * dollar_to_cents;
//	quarters = change_in_cents / quarter_to_cents;
//	change_in_cents -= quarters * quarter_to_cents;
//	dimes = change_in_cents / dime_to_cents;
//	change_in_cents -= dimes * dime_to_cents;
//	nickels = change_in_cents / nickel_to_cents;
//	cents = change_in_cents - nickels * nickel_to_cents;
	
	cout << "You can provide this change as follows: " << endl;
	cout << "dollars  : " << dollars << endl;
	cout << "quarters : " << quarters << endl;
	cout << "dimes    : " << dimes << endl;
	cout << "nickels  : " << nickels << endl;
	cout << "pennies  : " << cents << endl;
	
	
	return 0;
}