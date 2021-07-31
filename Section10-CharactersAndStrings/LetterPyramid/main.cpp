#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pyramid_key;
	unsigned int total_length {0};
	
	cout << "Please enter a key for the letter pyramid: ";
	cin >> pyramid_key;
	
	total_length = pyramid_key.length() * 2 - 1;
	
	for (size_t line {0}; line < pyramid_key.length(); ++line){
		string line_string;
		size_t char_length {line * 2 + 1};
		size_t initial_position {(total_length - char_length) / 2} ;
		size_t end_position { initial_position + char_length};
//		cout << "line: " << line << " | start: " << initial_position << " | end: " << end_position << " | char length: " << char_length << endl;
		for (size_t position {0}; position < total_length; ++position){
			if (position < initial_position || position >= end_position)
				line_string += " ";
			else if ( position - initial_position <= line ) {
//				cout << position << "(p) - " << initial_position << "(ip) = " << position - initial_position << endl;
				line_string += pyramid_key.at(position - initial_position);
			} else {
//				cout << end_position-1 << "ep - " << position << "(l) = " << end_position-1 - position << endl;
				line_string += pyramid_key.at(end_position-1 - position );
			}
		}
		
		cout << line_string << endl;
	}
	
	return 0;
}
