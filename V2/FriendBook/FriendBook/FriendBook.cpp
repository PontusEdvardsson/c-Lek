#include "FriendBook.h"
#include <iostream>
#include <string>


using namespace std;

//konstruktor
FriendBook::FriendBook(string title)
{
	this->nrOfFriends = 0;
	//this->capacity = 3; //plats f�r 3 v�nner innan expansion kr�vs. s�tter l�g cap i testfas f�r att testa expansion
	this->title = title;
	//this->friends = new Friend[this->capacity]; //ny dynamisk array vars storlek baseras p� capacity

}
FriendBook::~FriendBook()
{
	delete[] this->friends;
}
//funktioner
/*
void FriendBook::expand()
{
	this->capacity++;  // i testfas, senare exempelvis 10 f�r att optimera prestanda
	Friend* temp = new Friend[this->capacity];
	for (int i = 0; i < this->nrOfFriends; i++)
	{
		temp[i] = this->friends[i];
	}
	delete[] this->friends;
	this->friends = temp; //Funkar tack vare ekvivalensdefinitionen
}
*/
bool FriendBook::existFriend(string name, int birthDate) const
{
	bool found = false;
	Friend temp(name, birthDate);
	for (int i = 0; i < nrOfFriends && found == false; i++) // g�r att g�ra b�ttre men f�r l�sbarhet g�rs det p� detta s�ttet
	{														
		if(this->friends[i]==temp) //Ekvivalensen funkar f�r att vi har definerat operatorn f�r att 
		{						   //j�mf�ra tv� objekt av klassen friend
			found = true;
		}
	}
	return found;
}
bool FriendBook::removeFriend(string name, int birthDate)
{
	
	return false;
}

bool FriendBook::addFriend(string name, int birthDate)
{
	bool added = false;
	if (existFriend(name, birthDate) == false)
	{
		if (this->capacity == this->nrOfFriends)
		{
			this->expand();
		}
		this->friends[this->nrOfFriends++] = Friend(name, birthDate);
		added = true;
		return added;
	}
}
void FriendBook::getFriendsAsString(string arr[], int nrOf)const
{


}