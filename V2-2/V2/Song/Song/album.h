#pragma once
#ifndef ALBUM_H
#define ALBUM_H
#include "song.h"
#include <string>

using namespace std;
class Album
{
private:
	//privata members
		//privata variabler
	int nrOfSongs;
	int capacity;
	string artist;
	string title;
	int releaseYear;

	Song* *Song;
		//privata funktioner
	void expand();
	void initiate();
	void find(string artist, string genre, string name, int duration)const;
public:
	//publika members
		//konstruktor
	Album(string artist = "unknown", int releaseYear = 0);
		//destruktor
	~Album();
		//Publika variabler

		//publika funktioner
	int getNrOfSongs()const;
	bool addSong(string artist, string genre, string name, int duration);
	bool removeSong(string artist, string genre, string name, int duration);
	bool existSong(string artist, string genre, string name, int duration);
	void getSongsAsString(string arr[], int nrOf)const;

			//get-set funktioner
	string getArtist() const;
	void setArtist(string artist);
	string getTitle() const;
	void setTitle(string title);
	int getReleaseYear() const;
	void setReleaseYear(int releaseYear);
			//

};

#endif