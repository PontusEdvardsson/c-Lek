#pragma once
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
using namespace std;
class Movie
{
private:
	string title;
	string genre;
	int prodYear;
	double imdbRating;
	int releaseYear;

public:
	Movie(string title, string genre, int prodYear, double imdbRating, int releaseYear);
	Movie();

	void addMovie(Movie movie);
	void showAllMovies();
	void removeMovie(string title);
	void searchMovie(string title); // add functionality for genre, prod year search etc.
	string getTitle(Movie movie);


};

		

#endif