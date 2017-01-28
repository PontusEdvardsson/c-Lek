#include "FriendBook.h"
#include <iostream>
#include <string>


using namespace std;

//konstruktor
FriendBook::FriendBook(string title)
{
	this->nrOfFriends = 0;
	this->capacity = 3; //plats f�r 3 v�nner innan expansion kr�vs. s�tter l�g cap i testfas f�r att testa expansion
	this->title = title;
	//this->friends = new Friend[this->capacity]; //ny dynamisk array vars storlek baseras p� capacity
	this->friends = new Friend*[this->capacity];

	//for (int i = 0; i < CAP; i++) // initierar arrayen
	//{
	//	this->friends[i] = nullptr;
	//}
	initiate(0);
}
FriendBook::~FriendBook()
{
	/* // f�r stat allok array
	//delete[] this->friends;
	for (int i = 0; i < this->nrOfFriends; i++)
	{
		delete this->friends[i]; // deletar objekt. inga brackets.
	}
	*/

	for (int i = 0; i < this->nrOfFriends; i++) //f�rst objekten
	{
		delete this->friends[i];

	}
	delete[] this->friends;
}
//funktioner
/*
void FriendBook::expand() // f�r dyn allok array med obj
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

void FriendBook::expand() // f�r dynamic allok array med pointers
{
	this->capacity++;  // i testfas, senare exempelvis 10 f�r att optimera prestanda
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
	for (int i = 0; i < this->nrOfFriends && found == false; i++) // g�r att g�ra b�ttre men f�r l�sbarhet g�rs det p� detta s�ttet
	{														
		if(*this->friends[i]==temp) //Dereferera pekaren med en * framf�r "ge mig det som pekaren pekar ut"//Ekvivalensen funkar f�r att vi har definerat operatorn f�r att 
		{						   //j�mf�ra tv� objekt av klassen friend
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
		//beh�ver fyllas i
	}
}