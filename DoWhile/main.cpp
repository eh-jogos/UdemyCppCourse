#include <iostream>

using namespace std;

int main(){
	
	char selection {};
	do{
		cout << "\n--------------------------" << endl;
		cout << "1. Do This" << endl;
		cout << "2. Do That" << endl;
		cout << "3. Just DO IT!" << endl;
		cout << "Q. Gone away to do it" << endl;
		
		cout << "\nEnter your selection: ";
		cin >> selection;
		
		switch (selection){
			case '1':
				cout << "Don't let your dreams be dream" << endl;
				break;
			case '2':
				cout << "Nothing is impossible" << endl;
				break;
			case '3':
				cout << "Yesterday you said tomorrow! JUST DO IT!" << endl;
				break;
			case 'q':
			case 'Q':
				cout << "You can do it! Goodbye..." << endl;
				break;
			default:
				cout << "Invalid option, choose again." << endl;
		}
	} while ( selection != 'q' && selection != 'Q');
	
	return 0;
}