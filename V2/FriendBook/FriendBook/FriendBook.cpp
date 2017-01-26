#include "FriendBook.h"
#include <iostream>
#include <string>


using namespace std;

//konstruktor
FriendBook::FriendBook(string title)
{
	this->nrOfFriends = 0;
	//this->capacity = 3; //plats för 3 vänner innan expansion krävs. sätter låg cap i testfas för att testa expansion
	this->title = title;
	//this->friends = new Friend[this->capacity]; //ny dynamisk array vars storlek baseras på capacity

}
FriendBook::~FriendBook()
{
	delete[] this->friends;
}
//funktioner
/*
void FriendBook::expand()
{
	this->capacity++;  // i testfas, senare exempelvis 10 för att optimera prestanda
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
	for (int i = 0; i < nrOfFriends && found == false; i++) // går att göra bättre men för läsbarhet görs det på detta sättet
	{														
		if(this->friends[i]==temp) //Ekvivalensen funkar för att vi har definerat operatorn för att 
		{						   //jämföra två objekt av klassen friend
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