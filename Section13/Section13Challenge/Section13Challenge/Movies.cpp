#include "Movies.h"

Movies::Movies()
{
}

Movies::~Movies()
{
}

bool Movies::has_movie(std::string name) const
{
	bool movie_found {false};
	for (const Movie &movie:movies){
		if (movie.get_name() == name){
			movie_found = true;
			break;
		}
	}
	
	return movie_found;
}


Movie Movies::get_movie(std::string name) const
{
	Movie movie_found {"None", "None", 0};
	for (const Movie &movie:movies){
		if (movie.get_name() == name)
			movie_found = movie;
	}
	
	return movie_found;
}

void Movies::display() const
{
	if (movies.empty()){
		std::cout << "Sorry, no movies to display\n" << std::endl;
		return;
	}
	
	std::cout << "\n==========================" << std::endl;
	for (const auto &movie:movies){
		movie.display();
	}
	std::cout << "==========================\n" << std::endl;
}

bool Movies::add_movie(std::string name, std::string rating, int watch_count)
{
	bool movie_found {has_movie(name)};
	
	if (!movie_found)
		movies.push_back(Movie(name, rating, watch_count));
	
	return !movie_found;
}	

bool Movies::increment_watched(std::string name){
	Movie movie_to_increment {get_movie(name)};
	bool movie_found {movie_to_increment.get_name() == name};
	
	if (movie_found){
		movie_to_increment.increment_watched();
	}
	
	return movie_found;
}

