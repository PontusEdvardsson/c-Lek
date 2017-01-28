#pragma once
#ifndef FRIENDBOOK_H
#define FRIENDBOOK_H
#include <string>
#include "Friend.h"

using namespace std;
class FriendBook
{
public:
	static const int CAP = 10;
private:
	// member variables and helperfunctions
	int nrOfFriends;
	int capacity;
	string title;
	//Friend* friends;
	//Friend* friends[CAP]; //stat allok array
	Friend* *friends;
	void expand(); // privat hjälpfunktion
	void initiate(int from = 0);
	int find(string name, int birthDate)const;
public:
	FriendBook(string title= "unknown");
	~FriendBook();


	bool addFriend(string name, int birthDate); //use  the == operator to avoid multiples
	bool removeFriend(string name, int birthDate); 
	bool existFriend(string name, int birthDate) const;
	//void getFriendsBornByYearAsString(string arr[], int nrOf, int year) const;
	int getNrOfFriends() const;
	string getTitle() const;
	void setTitle(string title);
	//void clear();
	void getFriendsAsString(string arr[], int nrOf)const; // användaren har matat in vänner. användaren skall kunna
														// fråga vännboken 
														//skapa string array på antaler vänner
				
	//int nrOf = fb.getNrOfFriends();
	//string* str = new string[nrOf];
	//pb.getFriendsAsString(str, nrOf);
	//for(int i = 0;i<nrOf;i++)
	//{
	//cout<<str[i]<<endl;
	//}
	//delete[]str;



	//void saveOnFile() const; // filename name of owner followed by .txt
	//void readFromFile(); // filename name of owner followed by .txt
};
#endif