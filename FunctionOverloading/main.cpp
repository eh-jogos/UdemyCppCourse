#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num){
	cout << "Printing int: " << num << endl;
}

void print(double num){
	cout << "Printing double: " << num << endl;
}

void print(string s){
	cout << "Printing string: " << s << endl;
}

void print(string s, string t){
	cout << "Printing 2 strings " << s << " and " << t << endl;
}

void print(vector<string> vs){
	cout << "Printing vector of strings " ;
	for (auto s : vs){
		cout << s + " ";
	}
	cout << endl;
}


int main()
{
	print(100); //int
	print('A'); // char is always promoted to int, should print 65 - ASCII('A')
	
	print(123.5);  // double
	print(123.5F); // float is promoted to double
	
	print("C-Style string"); // C-style string is promoted to a C++ string
	
	string s{"C++ string"};
	print(s);  // C++ String
	
	print("C-Style string", s);  //first argument is converted to a C++ String
	
	vector<string> three_stooges {"Larry", "Moe", "Curly"};
	print(three_stooges);
	
	return 0;
}
