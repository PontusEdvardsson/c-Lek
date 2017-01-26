#include "movie.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Movie::Movie(string title, string genre, int prodYear, double imdbRating, int releaseYear)
{
	this->title = title;
	this->genre = genre;
	this->prodYear = prodYear;
	this->imdbRating = imdbRating;
	this->releaseYear = releaseYear;

}
Movie::Movie(){}
Movie::Movie()
{
	this->title = "?";
	this->genre = "?";
	this->prodYear = 0;
	this->imdbRating = 0;
	this->releaseYear = 0;
}



void Movie::addMovie(Movie movie) // ändra till att begära Moive parameter (klassen)
{
	string title;
	string genre;
	int prodYear;
	double imdbRating;
	int releaseYear;

	cout << "Movie title: ";
	getline(cin, title);

	cout << "Movie genre: ";
	getline(cin, genre);

	cout << "Movie productionyear: ";
	cin >> prodYear;
	cin.ignore();

	cout << "Movie IMDB-rating: ";
	cin >> imdbRating;
	cin.ignore();

	cout << "Movie releaseyear: ";
	cin >> releaseYear;
	cin.ignore();

	movie.title = title;
	movie.genre = genre;
	movie.prodYear = prodYear;
	movie.imdbRating = imdbRating;
	movie.releaseYear = releaseYear;
	ofstream myfile;
	myfile.open("movies.txt", fstream::app);
	myfile << title << endl << genre << endl << prodYear << endl << imdbRating << endl << releaseYear << endl;
	myfile.close();
	
}
void Movie::showAllMovies()
{


}
void Movie::removeMovie(string title)
{


}
void Movie::searchMovie(string title)
{


}
string Movie::getTitle(Movie movie){return movie.title;}

