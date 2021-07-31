#include <iostream>
#include <vector>

using namespace std;

int main(){
	
//	cout << "###### Couting up to 10" << endl;
//	for  (int i{1}; i <= 10; ++i)
//		cout << i << endl;
	
	
//	cout << "\n###### Couting up to 10 by 2" << endl;
//	for  (int i{1}; i <= 10; i += 2)
//		cout << i << endl;
	
	
//	cout << "\n###### Couting down from 10" << endl;
//	for  (int i{10}; i > 0; --i)
//		cout << i << endl;
//	cout << "Blastoff!" << endl;
	
	
//	cout << "\n###### Couting from 10 to  100 by 10, but printing only divisibles by 15" << endl;
//	for  (int i{10}; i <= 100; i += 10){
//		if (i % 15 == 0)
//			cout << i << endl;
//	}
	
	
	cout << "\n###### Using comma to have more than one loop variable" << endl;
	for (int i{1}, j{5}; i <= 5; ++i, ++j){
		cout << i << " + " << j << " = " << i+j << endl;
	}
	
	cout << "\n###### Printing a table" << endl;
	for (int i{1}; i <= 100; ++i){
		cout << i;
		if (i % 10 == 0)
			cout << endl;
		else
			cout << " ";
	}
	
	
	cout << "\n###### Printing a table in one line using conditional operator" << endl;
	for (int i{1}; i <= 100; ++i){
		cout << i << ((i % 10 == 0) ? "\n" : " ");
	}
	
	
	cout << "\n###### My nicely spaced table" << endl;
	for (int i{1}; i <= 100; ++i){
		if (i < 10)
			cout << "00" << i;
		else if (i < 100)
			cout << "0" << i;
		else
			cout << i;
		
		cout << ((i % 10 == 0) ? "\n" : " ");
	}
	
	cout << "\n###### Loop through vectors" << endl;
	vector<int> nums {10,20,30,40,50};
	for (unsigned i{0}; i<nums.size(); ++i){
		cout << nums[i] << endl;
	}
	
	
	return 0;
}