#include <iostream>

using namespace std;

int main(){
	enum Direction {
		left, right, up, down
	};
	
	Direction heading {left};
	
	switch (heading){
		case left:
			cout << "Going left" << endl;
			break;
		case right:
			cout << "Going right" << endl;
			break;
		default:
			cout << "Ok" << endl; // prevents warnings from appearing in the compiler for not dealing with up and down
			break;
	}
	
	return 0;
}