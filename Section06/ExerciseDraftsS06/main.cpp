#include <iostream>

using namespace std;

void employee_profile() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
	double hourly_wage {23.50};
	string name;
    int age;
    cin >> name >> age;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << name << " " << age << " " << hourly_wage;
}


int main(){
	employee_profile();
	return 0;
}