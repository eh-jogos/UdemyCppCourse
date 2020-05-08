#include <iostream>
#include <vector>
#include <string>


using namespace std;


void display( const vector<string> *const v ){
	for (auto str: *v)
		cout << str << " ";
	cout << endl;
}


void display( const int *array, int sentinel){
	while (*array != sentinel){
		cout << *array << " ";
		array++;
	}
	cout << endl;
}


int main()
{
	cout << "\n----------------------" << endl;
	vector<string> stooges {"Larry", "Moe", "Curly"};
	display(&stooges);
	
	
	cout << "\n----------------------" << endl;
	int scores[] {100,98,97,79,85,-1};
	display(scores, -1);
	
	
	return 0;
}
