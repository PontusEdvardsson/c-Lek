#include "FriendBook.h"
#include <iostream>
#include <string>


using namespace std;

//konstruktor
FriendBook::FriendBook(string title)
{
	this->nrOfFriends = 0;
	this->capacity = 3; //plats för 3 vänner innan expansion krävs. sätter låg cap i testfas för att testa expansion
	this->title = title;
	//this->friends = new Friend[this->capacity]; //ny dynamisk array vars storlek baseras på capacity
	this->friends = new Friend*[this->capacity];

	//for (int i = 0; i < CAP; i++) // initierar arrayen
	//{
	//	this->friends[i] = nullptr;
	//}
	initiate(0);
}
FriendBook::~FriendBook()
{
	/* // för stat allok array
	//delete[] this->friends;
	for (int i = 0; i < this->nrOfFriends; i++)
	{
		delete this->friends[i]; // deletar objekt. inga brackets.
	}
	*/

	for (int i = 0; i < this->nrOfFriends; i++) //först objekten
	{
		delete this->friends[i];

	}
	delete[] this->friends;
}
//funktioner
/*
void FriendBook::expand() // för dyn allok array med obj
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

int FriendBook::find(string name, int birthDate)const
{
	int pos = -1;
	Friend temp(name, birthDate);
	for (int i = 0; i < this->nrOfFriends && pos == -1; i++)
	{
		if (temp == *this->friends[i])
		{
			pos = i;
		}
	}
	return pos;

}
void FriendBook::initiate(int from)
{
	for (int i = 0; i < this->capacity; i++)
	{
		this->friends[i] = nullptr;
	}
}

void FriendBook::expand() // för dynamic allok array med pointers
{
	this->capacity++;  // i testfas, senare exempelvis 10 för att optimera prestanda
	Friend* *temp = new Friend*[this->capacity];
	for (int i = 0; i < this->nrOfFriends; i++)
	{
		temp[i] = this->friends[i];
	}
	delete[] this->friends;
	this->friends = temp; //Funkar tack vare ekvivalensdefinitionen
	this->initiate(this->nrOfFriends);
}
bool FriendBook::existFriend(string name, int birthDate) const
{
	bool found = false;
	Friend temp(name, birthDate);
	for (int i = 0; i < this->nrOfFriends && found == false; i++) // går att göra bättre men för läsbarhet görs det på detta sättet
	{														
		if(*this->friends[i]==temp) //Dereferera pekaren med en * framför "ge mig det som pekaren pekar ut"//Ekvivalensen funkar för att vi har definerat operatorn för att 
		{						   //jämföra två objekt av klassen friend
			found = true;
		}
	}
	return found;
}
bool FriendBook::removeFriend(string name, int birthDate)
{
	bool removed = false;
	int pos = this->find(name, birthDate);
	if (pos > -1)
	{
		delete this->friends[pos]; // deleta det friendobject som skall tas bort
		//this -> friends[pos] = this->friends[nrOfFriends-1];
		//this -> nrOfFriends--;
		this->friends[pos] = this->friends[--nrOfFriends];
		removed = true;
	}

	return removed;
}

bool FriendBook::addFriend(string name, int birthDate)
{
	bool added = false;
	if (existFriend(name, birthDate) == false)
	{
		if (this->CAP == this->nrOfFriends)
		{
		//	this->expand();
		}
		else
		{
			this->friends[this->nrOfFriends++] = new Friend(name, birthDate);
			added = true;
		}
	}
	return added;
}
void FriendBook::getFriendsAsString(string arr[], int nrOf)const
{
	for (int i = 0; i < nrOf; i++)
	{
		//behöver fyllas i
	}
}