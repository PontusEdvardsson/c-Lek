#include "Friend.h"
#include <string>
#include <iostream>

using namespace std;

Friend::Friend(string name, int birthDate)
{
	this->name = name;
	this->birthDate = birthDate;

}
Friend::~Friend()
{


}
Friend::Friend()
{
	this->name = "?";
	this->birthDate = 0;
}
void Friend::setBirthDate(int birthDate)
{
	int birthDay = 0;
	int birthMonth = 0;					//i set functioner så sker kontroller av lämpliga värden

	birthDay = birthDate % 100;
	birthMonth = (birthDate % 10000)/100; // heltalsdivision!!

	if (birthMonth <= MAXMONTH && birthDay <= MAXDAY)
	{
		this->birthDate = birthDate;
	}
	else
	{
		this->birthDate = 0;

	}
	


	
}
string Friend::getName()
{

	return this->name;
}
int Friend::getBirthDate()
{
	return this->birthDate;
}

void Friend::setName(string name)
{
	this->name = name;
}
int Friend::age(int actualYear)
{
	return (actualYear - this->birthDate/10000);

}

void addFriend(Friend arr[], int& nrOf)
{
	string aName = "";
	int abirthDate = 0;
	cout << "Ange vännens namn: ";

	getline(cin, aName);
	cout << "Ange vännens födelseår: ";
	cin >> abirthDate;
	cin.ignore();

	for (int i = 0; i < nrOf; i++)
	{
		arr[i].setBirthDate(abirthDate);
		arr[i].setName(aName);
	}
	
}
//string toString()
//{
//	return "";
//}
