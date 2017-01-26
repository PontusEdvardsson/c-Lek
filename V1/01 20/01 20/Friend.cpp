#include "Friend.h"
#include <string>
#include <iostream>

using namespace std;
	
	Friend::Friend(string name, int birthyear)
	{
		this->name = name;
		this->birthYear = birthYear;
	
	}
	Friend::~Friend()
	{
		cout << "FriendDestruction" << this->name << endl;
	
	}
	Friend::Friend()
	{
		this->name = "?";
		this->birthYear = 0;
	}
	void Friend::setBirthYear(int birthYear)
	{
		this ->birthYear = birthYear;
	}
	string Friend::getName()
	{

		return this ->name;
	}
	int Friend::getBirthYear()
	{
		return this->birthYear;
	}

	void Friend::setName(string name)
	{
		this ->name = name;
	}
	int Friend::age(int actualYear)
	{
		return (2017 - actualYear);
	}

	

	void addFriend(Friend arr[], int& nrOf)
	{
		string aName = "";
		int aBirthyear = 0;
		cout << "Ange vännens namn: ";
		
		getline(cin, aName);
		cout << "Ange vännens födelseår: ";
		cin >> aBirthyear;
		cin.ignore();

		for (int i = 0; i < nrOf; i++)
		{
			arr[i].setBirthYear(aBirthyear);
			arr[i].setName(aName);
		}

	
	}
	//string toString()
	//{
	//	return "";
	//}
