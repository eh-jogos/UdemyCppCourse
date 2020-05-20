#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	// attributes
	string name {"Player"};
	int health {10};
	int xp {3};
	
public:
	// methods
	void set_name(std::string name_val) {
		name = name_val;
	}
	
	// Overloaded Contructors
	Player(){
		cout << "No args constructor called" << endl;
	}
	Player(std::string name) {
		cout << "String constructor called" << endl;
	}
	Player(std::string name, int health, int xp) {
		cout << "Three args constructos called" << endl;
	}
	
	// Destructor
	~Player(){
		cout << "Destructor called for " << name << endl;
	}
};


int main()
{
	
	{
		Player slayer;
		slayer.set_name("Slayer");
	}
	
	{
		Player frank;
		frank.set_name("Frank");
		Player hero("Hero");
		hero.set_name("Hero");
		Player villain("Villain", 200, 12);
		villain.set_name("Villain");
	}		Player frank;
		frank.set_name("Frank");
		Player hero("Hero");
		hero.set_name("Hero");
		Player villain("Villain", 200, 12);
		villain.set_name("Villain");
	}
	

	
	Player *enemy = new Player;
	enemy->set_name("Enemy");
	
	Player *level_boss = new Player("Level Boss", 1000, 300);
	level_boss->set_name("Level Boss");
	
	delete enemy;
	delete level_boss;
	
	return 0;
}
