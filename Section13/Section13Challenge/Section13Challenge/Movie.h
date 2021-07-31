#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <iostream>
#include <string>

class Movie
{
private:
	std::string name;
	std::string rating;
	int watched;
public:
	Movie(std::string name_val, std::string rating_val, int watch_count = 0);
	~Movie();
	
	std::string get_name() const { return name; }
	std::string get_rating() const { return rating; }
	int get_watch_count() const {return watched; }
	void display() const;
	
	void set_watched(int watch_count);
	void increment_watched();
};

#endif // _MOVIE_H_
