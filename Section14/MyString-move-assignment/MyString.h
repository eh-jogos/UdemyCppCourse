#ifndef __MY_STRING_H_
#define __MY_STRING_H_

class MyString
{
private:
	char *str; // pointer to a char[] that holds a C-style string
	
public:
	MyString();							// No-args constructor
	MyString(const char *s);			// Overloaded Constructor
	MyString(const MyString &source);	// Copy Constructor
	MyString(MyString &&source);		// Move Constructor
	~MyString();						// Destructor
	
	MyString &operator=(const MyString &rhs); 	// copy assignment
	MyString &operator=(MyString &&rhs); 		// move assignment
	
	void display() const;
	int get_length() const;				// getters
	const char *get_str() const;

};

#endif // __MY_STRING_H_
