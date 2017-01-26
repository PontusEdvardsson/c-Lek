#include <iostream>
#include <string>
#define FRIEND_H
#define FRIEND_H
using namespace std;

class Friend
{
private:

	int birthYear;
	string name;

public:
	//KONSTRUKTOR
	Friend(string name, int birthyear);
	Friend();
	//
	string getName();
	int getBirthYear();
	void setName(string name);
	int age(int actualYear);
	//	string toString();
	void setBirthYear(int birthyear);
	



};
