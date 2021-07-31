#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main()
{
	MyString a {"Hello"};
	MyString b;
	b = a;
	b = "This is a test";
	
	
	MyString empty;				// no-args constructor
	MyString larry {"Larry"};	// overloaded constructor
	MyString stooge {larry};	// copy constructor
	MyString stooges;			// no-args constructor
		
	empty = stooge;				// copy assignement operator
	
	empty.display();
	larry.display();
	stooge.display();
	empty.display();
	
	stooges = "Larry, Moe, and Curly";
	stooges.display();
	
	vector<MyString> stooges_vec;
	stooges_vec.push_back("Larry");
	stooges_vec.push_back("Moe");
	stooges_vec.push_back("Curly");
	
	cout << "=== Loop1 ==========================" << endl;
	for (const MyString &string:stooges_vec)
		string.display();
	
	cout << "=== Loop2 ==========================" << endl;
	for (MyString &string:stooges_vec)
		string = "Changed";				//Copy Assignment
		
	cout << "=== Loop3 ==========================" << endl;
	for (const MyString &string:stooges_vec)
		string.display();
	
	return 0;
}
