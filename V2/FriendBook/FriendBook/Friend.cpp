#include "friend.h"
#include <iostream>
#include <string>


using namespace std;

//konstruktor
Friend::Friend(string name, int birthDate)
{
	this->name = name;
	this->birthDate = birthDate;

}
Friend::~Friend() // deletar den tidigare arrayen
{


}
Friend::Friend() //Kr�vs f�r att skapa ny array via dynamic.
{
	this->name = "?";
	this->birthDate = 0;
}


//funktioner
bool Friend::operator==(Friend compObj)const
{
	//bool equal = false;
	//if (this-> name == compObj.name && this-> birthDate == compObj.birthDate)
	//{
	//	equal = true;  // l�ngre s�tt att utf�ra det nedre
	//}

	//return equal;
	return this->name == compObj.name && this->birthDate == compObj.birthDate; //ger true, false
}

bool Friend::operator<(Friend compObj)const
{
	return this->name < compObj.name; //string har < definerat s� att aPontus hamnar f�re Pontus
}

string Friend::getName()const
{
	return this->name;
}

int Friend::getBirthDate()const
{
	return this->birthDate;
}
void Friend::setName(string name)
{
	this->name = name;
}
void Friend::setBirthDate(int birthDate)
{
 // h�mta ifr�n tidigare
}
int Friend::age(int actualYear)const
{
	return (actualYear - this->birthDate / 10000);
}
string Friend::toString()const
{
	return "Namn: " + this->name + "\nF�delse�r: "
		+ to_string(this->birthDate) + "\n";
}

