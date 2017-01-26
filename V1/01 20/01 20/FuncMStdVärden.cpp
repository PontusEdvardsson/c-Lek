#include <iostream>
#include <string>
using namespace std;

void showText(string str = "unknown", int nrOf = 2); // function med standardvärden
void show(string strArray[], int nrOfElements);
void add(string name[], int& nrOfNames);

int main()
{
	string arr[10] = {"Bil", "Hus", "Cykel"};
	string arr1[10] = {"tilt", "fisk"};
	int nrOf = 2;

	add(arr1, nrOf);
	add(arr1, nrOf);
	show(arr1, nrOf);

	showText(); // unknown 2 ggr
	showText("Hej", 5); // Hej 5 ggr

	show(arr, 3); // Bestående ändringar i functionen. strArray blir pekare till arr.






	return 0;
}

void showText(string str, int nrOf)
{
	for (int i = 0; i < nrOf; i++)
	{
		cout << str << endl;

	}
	cout << endl;

}

void show(string strArray[], int nrOfElements)
{
	for (int i = 0; i < nrOfElements; i++)
	{
		cout << strArray[nrOfElements];
	}
}

void add(string name[], int& nrOfNames)
{
	string aName = "";
	cout << "Ange ett name: ";
	getline(cin, aName);
	name[nrOfNames++] = aName;

}