#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <iostream>

#include <vector>
#include "Movie.h"

class Movies
{
	std::vector<Movie> movies;
public:
	Movies();
	~Movies();
	
	Movie get_movie(std::string name) const ;
	bool has_movie(std::string name) const ;
	void display() const;
	
	bool add_movie(std::string name, std::string rating, int watch_count);
	bool increment_watched(std::string name);

};

#endif // _MOVIES_H_
