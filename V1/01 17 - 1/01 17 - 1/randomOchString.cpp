#include <iostream>
#include <string>

using namespace std;

int main()
{

	//Variables
	int num, age, yearOfBirth = 0;
	const double PI = 3.141529; // Kan inte �ndras under k�rningen av programmet (kontant)
	string name, hemOrt = "";
	int nr = rand() % 6; // random nr mellan 0 till 5

	cout << "Skriv in ditt namn: ";
	getline(cin, name);
	cout << "Skriv in din hem ort: ";
	getline(cin, hemOrt);
	cout << "Skriv in din \x86lder: ";
	cin >> age;
	cin.ignore();

	if(hemOrt == name){
		cout << "Lika";
	
	}
	if (hemOrt < name) {
		cout << "F�rsta bokstaven i name st�rre �n hemOrt, j�mf�r andra bokstaven ifall boktaven lika";

	}
	num = name.find("t");
	yearOfBirth = 2017 - age;
	cout << num << "Hej " << name << "! \nDu tycks vara f�dd " << yearOfBirth << " eller " << yearOfBirth - 1 << " och kommer fr\x86n " << hemOrt << endl;


	return 0;
}