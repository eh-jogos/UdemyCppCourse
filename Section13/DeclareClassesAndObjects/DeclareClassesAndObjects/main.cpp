#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Player{
	// attributes
	string name {"Player"};
	int health {100};
	int xp {3};
	
	// methods
	void talk(string msg);
	bool is_dead();
};


class Account {
	// attributes
	string name {"Account"};
	double balance {0};
	
	// methods
	bool deposit(double value);
	bool withdraw(double value);
};


int main()
{
	Account frank_account;
	Account jim_account;
	
	Player frank;
	Player hero;
	
	Player players[] {frank, hero};
	
	vector<Player> player_vec {frank};
	player_vec.push_back(hero);
	
	Player *enemy {nullptr};
	enemy = new Player;
	
	delete enemy;
	
	cout << "Please stop here " << endl; 
	return 0;
}
