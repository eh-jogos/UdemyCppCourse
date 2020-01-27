#include <iostream>

using namespace std;

int main(){
	int num {};
	cout << "Enter a positive integer - start the countdown : ";
	cin >> num;
	
	while (num > 0){
		cout << num << endl;
		--num;
	}
	cout << "Blastoff!" << endl;
	
	
	num = 0;
	cout << "\nEnter a positive number to count up to: ";
	cin >> num;
	
	int iteration {1};
	while (num >= iteration){
		cout << iteration << endl;
		iteration++;
	}
	
	
	int number {};
	cout << "\nEnter an integer less than 100: ";
	cin >> number;
	
	while (!(number < 100)){
		cout << "Enter an integer less than 100: ";
		cin >> number;
	}
	
	cout << "Thanks" << endl;

	bool done {false};
	number = 0;
	
	while (!done) {
		cout << "\nEnter an integer between 1 and 5: ";
		cin >> number;
		if (number > 1 && number < 5){
			cout << "Thanks!" << endl;
			done = true;
		} else {
			cout << "Out of Range, try again" << endl;
		}
	}
	
	return 0;
}