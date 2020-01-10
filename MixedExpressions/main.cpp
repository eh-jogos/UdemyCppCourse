#include <iostream>

using namespace std;

int main(){
	const int count {3};
	int num1 {0}, num2 {0}, num3 {0};
	
	cout << "Please enter 3 integers separated by spaces: ";
	
	cin >> num1 >> num2 >> num3;
	cout << "\nThe integers entered were: " << num1 << ", " << num2 << ", " << num3 << endl;
	
	int total_sum {num1 + num2 + num3};
	cout << "The sum of them is: " << total_sum << endl;
	
	// double average {(double)total_sum / count}; // Old C casting style, use static_cast
	double average {static_cast<double>(total_sum) / count};
	cout << "The average of them is: " << average << endl;
		
	cout << endl;
	return 0;
}