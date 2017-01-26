
#include <iostream>
#include <string>
#define FRIEND_H
#define FRIEND_H
using namespace std;

class Friend
{
private:

	int birthDate;
	string name;

public:
	static const int MAXDAY = 31;
	static const int MAXMONTH = 12;
	//KONSTRUKTOR
	Friend(string name, int birthdate);
	Friend();
	//
	string getName();
	int getBirthDate();
	void setName(string name);
	int age(int actualYear);
	//	string toString();
	void setBirthDate(int birthdate);




};