#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int score {100};
	int *score_ptr {&score};
	
	cout << *score_ptr << endl; // 100
	
	*score_ptr = 200;
	
	cout << *score_ptr << endl; // 200
	cout << score << endl; // 200
	
	
	cout << "\n----------------------------" << endl;
	double high_temp {100.7};
	double low_temp {37.4};
	double *temp_ptr {&high_temp};
	
	cout << *temp_ptr << endl; // 100.7
	temp_ptr = &low_temp;
	cout << *temp_ptr << endl; // 37.4
	
	cout << "\n----------------------------" << endl;
	
	string name {"Frank"};
	string *name_ptr {&name};
	
	cout << *name_ptr << endl; // Frank
	name = "James";
	cout << *name_ptr << endl; // James
	
	cout << "\n----------------------------" << endl;
	
	vector<string> stooges {"Larry", "Moe", "Curly"};
	vector<string> *vector_ptr {&stooges};
	
	cout << "First stooge: " << (*vector_ptr).at(0) << endl; // Larry
	cout << "Second stooge: " << (*vector_ptr).at(1) << endl; // Moe
	cout << "Third stooge: " << (*vector_ptr).at(2) << endl; // Curly
	
	cout << "\nStooges: ";
	for (auto stooge: *vector_ptr)
		cout << stooge << " ";
	cout << endl;
	
	return 0;
}
