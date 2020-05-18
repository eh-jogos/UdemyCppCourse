#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Player{
public:
	// attributes
	string name {"Player"};
	int health {10};
	int xp {3};
	
	// methods
	void talk(string msg) { cout << name << " says " << msg << endl;}
	bool is_dead();
};


class Account {
public:
	// attributes
	string name {"Account"};
	double balance {0};
	
	// methods
	bool deposit(double value){ balance += value; cout << "In deposit" << endl;}
	bool withdraw(double value){ balance -= value; cout << "In withdraw" << endl;}
};


int main()
{
	Player frank;
	frank.name = "Frank";
	frank.health = 100;
	frank.xp = 12;
	
	frank.talk("Hi there!");
	
	Player *enemy = new Player;
	(*enemy).name = "Mid-Boss";
	(*enemy).health = 200;
	enemy->xp = 15;
	
	enemy->talk("I'll destroy you!");
	
	Account frank_account;
	frank_account.name = "Frank's account";
	frank_account.balance = 5000.0;
	
	frank_account.deposit(1000.0);
	frank_account.withdraw(500.0);
	
	return 0;
}
