#pragma once
#ifndef SONG_H 
#define SONG_H

using namespace std;
class Song
{
	private:
		//Privata members
			//Privata variabler
		string artist;
		int duration;
		string genre;
		string name;
			//Privata funktioner
		int findFriend(string artist, string genre, string name, int duration)const; // int för att returnera vilken index i arrayen songen är
	public:
		//publika members
			//Konstruktor
		Song(string artist = "?", string genre = "?", string name = "?", int duration = 0);
		Song();
			//destruktor
		~Song();
			//Jämförelseoperatorer
		bool operator==(Song compObj)const;
		bool operator<(Song  compObj)const;
			//publika variabler

			//Publika funktioner
		string toString()const;
				//get-set funktioner
		string getName() const;
		void setName(string name);
		string getArtist() const;
		void setArtist(string artist);
		string getGenre() const;
		void setGenre(string genre);
		int getDuration() const;
		void setDuration(int duration);
				// 



};
#endif
