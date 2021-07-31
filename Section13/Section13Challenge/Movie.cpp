#include "Movie.h"

Movie::Movie(std::string name_val, std::string rating_val, int watch_count)
	:name{name_val}, rating{rating_val}, watched{watch_count}
{
}

Movie::~Movie()
{
}

void Movie::display() const
{
	std::cout << name << ", " << rating << ", " <<  watched << std::endl;
}

void Movie::set_watched(int watch_count)
{
	watched = watch_count;
}


void Movie::increment_watched(){
	++watched;
}