#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{

	//Variables
	ofstream myFile;
	myFile.open("C://slask//data.txt", ios::app);
	myFile << "asdfasdf"<< endl;
	int a = 0;
	while (a < 100)
	{

		myFile << "a" << a;
		a++;
	}
	myFile.close();

	return 0;
}