#ifndef __MY_STRING_H_
#define __MY_STRING_H_

class MyString
{
	char *str; // pointer to a char[] that holds a C-style string
public:
	MyString();							// No-args constructor
	MyString(const char *s);			// Overloaded Constructor
	MyString(const MyString &source);	// Copy Constructor
	~MyString();						// Destructor
	
	void display() const;
	int get_length() const;				// getters
	const char *get_str() const;

};

#endif // __MY_STRING_H_
