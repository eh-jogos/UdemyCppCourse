#include <iostream>

using namespace std;

int main(){
	
	int counter {10};
	int result {0};
	
	// Example 1 - simple increment
	cout << "Example1" << endl;
	cout << "Counter: " << counter << endl;
	
	counter = counter + 1;
	cout << "Counter: " << counter << endl;
	
	counter++;
	cout << "Counter: " << counter << endl;
	
	++counter;
	cout << "Counter: " << counter << endl;
	
	
	// Example 2 - pre increment
	cout << "\nExample2" << endl;
	
	counter = 10;
	result = 0;
	
	cout << "Counter: " << counter << endl;
	
	result = ++counter; // Note the pre increment
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;
	
	// Example 3 - post increment
	cout << "\nExample3" << endl;
	
	counter = 10;
	result = 0;
	
	cout << "Counter: " << counter << endl;
	
	result = counter++; // Note the post increment
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;
	
	// Example 4 - post increment
	cout << "\nExample4" << endl;
	
	counter = 10;
	result = 0;
	
	cout << "Counter: " << counter << endl;
	
	result = ++counter + 10; // Note the pre increment
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;
	
	// Example 5 - post increment
	cout << "\nExample3" << endl;
	
	counter = 10;
	result = 0;
	
	cout << "Counter: " << counter << endl;
	
	result = counter++ + 10; // Note the post increment
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;
	
	return 0;
}