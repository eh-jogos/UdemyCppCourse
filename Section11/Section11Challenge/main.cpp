// Section 11 Challenge -> Section 09 Refactor
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/

/* My Planing pseudocode
 * 
 * Do the menu structure first, test if it's only exiting with the right input
 * Do placeholders for each input, test the flow is alright
 * Start filling out one input option at a time, I guess I'd just do them in order
 * * * Print number - check for array size, and either print the error message or the vector
 * * * Add number - no checks needed on this one, just prompt for a number then push_back() and print message
 * * * Average - have two variables, one for sum, one for count, first check the size of the vector and print error if empty
 * * * * else do a ranged for incrementing each in it's respective
 * * * * way, then after the loop calculate the average with sum/count
 * * * Smallest - check size for error, else have a variable called min, assign the first vector value to it
 * * * * than do a ranged for, always checking if the value is lesser than min, and override it if it is
 * * * * maybe do a normal for, so you don't repeat the first value, instead of a ranged for
 * * * Bigges - same as smallest, just with a inverted check
 * * * Quit - print goodbye and quit
 * 
 */

#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

void display_menu();
char sanitize_user_input(char user_input);
bool is_list_empty(const vector<int> &list);

void print_numbers(const vector<int> &list);
void add_user_integer_to(vector<int> &list);
void calculate_list_mean(const vector<int> &list);
void display_smallest_number(const vector<int> &list);
void display_largest_number(const vector<int> &list);

int main() {
	
	char user_input {};
	vector<int> list {};
	
	do {
		
		display_menu();
		cin >> user_input;
		
		user_input = sanitize_user_input(user_input);
		
		cout << endl;
		
		switch (user_input){
			case 'P':
				if (is_list_empty(list))
					cout << "[] - the list is empty" << endl;
				else
					print_numbers(list);
				break;
			case 'A':
			{
				add_user_integer_to(list);
				break;
			}
			case 'M':
				if (is_list_empty(list))
					cout << "Unable to calculate the mean - no data" << endl;
				else
					calculate_list_mean(list);
				break;
			case 'S':
				if (is_list_empty(list))
					cout << "Unable to determine the smallest number - no data" << endl;
				else
					display_smallest_number(list);
				break;
			case 'L':
				if (is_list_empty(list))
					cout << "Unable to determine the largest number - no data" << endl;
				else
					display_largest_number(list);
				break;
			case 'Q':
				cout << "Thank you for using this program! Bye-bye!" << endl;
				break;
			default:
				cout << "I can't understand what you're saying, please try again." << endl;
		}
		
	} while (user_input != 'Q');
	
	return 0;
}


bool is_list_empty(const vector<int> &list)
{
	return list.size() == 0;
}


void display_menu()
{
	cout << endl;
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit" << endl;
	
	cout << "\nEnter your choice: ";
}


char sanitize_user_input(char user_input)
{
	if (islower(user_input))
		return toupper(user_input);
	else
		return user_input;
}


void print_numbers(const vector<int> &list)
{
	cout << "[ ";
	for (auto item : list){
		cout << item << " ";
	}
	cout <<"]" << endl;
}


void add_user_integer_to(vector<int> &list)
{
	int to_add {};
	cout << "Enter an integer: ";
	cin >> to_add;
	list.push_back(to_add);
	cout << to_add << " added." << endl;
}


void calculate_list_mean(const vector<int> &list)
{
	int sum {0};
	for (auto number : list){
		sum += number;
	}
	double average = static_cast<double>(sum) / list.size();
	
	cout << "The mean is: " << average << endl;	
}


void display_smallest_number(const vector<int> &list)
{
	int min {list.at(0)};
	
	for (unsigned i = 1; i < list.size(); ++i)
		min = (list.at(i) < min) ? list.at(i) : min;
	
	cout << "The smallest number is: " << min << endl;	
}


void display_largest_number(const vector<int> &list)
{
	int max {list.at(0)};
	
	for (unsigned i = 1; i < list.size(); ++i)
		max = (list.at(i) > max) ? list.at(i) : max;
	
	cout << "The largest number is: " << max << endl;
}