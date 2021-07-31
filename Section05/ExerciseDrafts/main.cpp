#include <iostream>

using namespace std;


void say_hi(){
	cout << "Hi Frank!" << endl;
}


void sallys_dogs(){
	int x {3};
	
	cout << "Sally has " << x << " dogs." << endl;
}


void date_of_birth() {
	int m {};
	int d {};
	int y {};
	
	cin >> m >> d >> y;
	
	cout << m << " " << d << " " << y << endl;
}

int main(){
	say_hi();
	sallys_dogs();
	date_of_birth();
	return 0;
}