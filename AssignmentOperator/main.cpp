#include <iostream>

using namespace std;

int main(){
	
	const int const1 {15};
	int num1 {10};
	int num2 {20};
	
	num1 = 99;
//	num1 = num2;
//	num1 = num2 = 999;

	// Exampĺe of errors
//	num1 = "Daniel"
//	const1 = 99;
//	99 = num1
	
	cout << "const1 is: " << const1 << endl;
	cout << "num1 is:   " << num1 << endl;
	cout << "num2 is:   " << num2 << endl;
	
	cout << endl;
	
	return 0;
}