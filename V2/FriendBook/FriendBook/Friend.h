#pragma once
#ifndef FRIEND_H
#define FRIEND_H
#include <string>
using namespace std;
class Friend
{
private:

	string name;
	int birthDate;

public:
	static const int MAXDAY = 31;
	static const int MAXMONTH = 12;
	//Konstruktor
	Friend(string name, int birthdate);
	Friend();
	//Jämförelseoperatorer
	bool operator==(Friend compObj)const;
	bool operator<(Friend  compObj)const; // Baseras på name

	//Klassfunktioner

	string getName()const;
	int getBirthDate()const;
	void setName(string name);
	void setBirthDate(int birthDate);
	int age(int actualYear)const;
	string toString()const;
};



#endif