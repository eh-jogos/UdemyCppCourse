#include <iostream>

using namespace std;

int main()
{
	int *int_ptr {nullptr};
	int_ptr = new int;
	
	cout << "Display int_ptr: " << int_ptr << endl;
	
	delete int_ptr;
	
	 double *temp_ptr {};
	size_t size{0};
	
	cout << "How many temps?";
	cin >> size;
	
	temp_ptr = new double[size];
	
	cout << "Display temp_ptr: " << int_ptr << endl;
	
	delete [] temp_ptr;
	
	return 0;
}
