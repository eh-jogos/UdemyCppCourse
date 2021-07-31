#include <iostream>
#include <string>

using namespace std;


class Player
{
private:
	std::string name;
	int health;
	int xp;

public:
	Player(string name_val = "None", int health_val = 0, int xp_val = 0);

	void set_name(std::string name_val) {
		name = name_val;
	}
	std::string get_name() const {
		return name;
	}
	
};


Player::Player(std::string name_val, int health_val, int xp_val)
	: name{name_val}, health{health_val}, xp{xp_val} {
		cout << "Three-Args constructor" << endl;
}


void display_player_name(const Player &p){
	cout << p.get_name() <<  endl;
}


int main()
{
	const Player villain {"Villain", 100, 55};
	Player hero { "Hero", 100, 15};
	
//	villain.set_name("Super Villain") // Should never work on a const object
	cout << villain.get_name() << endl; // Will only work if you explicitly tell the compiler that get_name is a const function
	cout << hero.get_name() << endl; // Will work anyway, because hero is not const so the compiler doesn't care if get_name modifies it
	
	// In both cases below this will only work if get_name is const correct, as the function is read-only, 
	// even in the case of hero, it will give an error if the compiler is not sure that get_name won't make changes to the object
	display_player_name(villain);
	display_player_name(hero);
	
	return 0;
}
