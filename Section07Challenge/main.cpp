#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	cout << "vector1 values:" << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "Total size for vector1 is: " << vector1.size() << endl;
	
	vector2.push_back(100);
	vector2.push_back(200);
	cout << "\nvector2 values:" << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << "Total size for vector2 is: " << vector2.size() << endl;
	
	vector <vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	cout << "\nvector_2d values:" << endl;
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;
	
	vector1.at(0) = 100;
	
	cout << "\nvector_2d values will remain the same:" << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	
	cout << "\nBut vector1 values have changed:" << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	
	return 0;
}