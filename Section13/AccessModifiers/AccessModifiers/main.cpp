#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Player{
private:
	// attributes
	string name {"Player"};
	int health {10};
	int xp {3};
	
public:
	// methods
	void talk(string msg) { cout << name << " says " << msg << endl;}
	bool is_dead();
};

int main()
{
	Player daniel;
//	daniel.name = "Daniel";
//	cout << daniel.health << endl;
	
	daniel.talk("Hello There");
	
	return 0;
}
