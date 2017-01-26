#include <iostream>
#include <string>
#include "movie.h"
#include <fstream>
#include <new>


using namespace std;
const int CAP = 10;

int main()
{
	Movie arrMovie[CAP];


	int* nrs = nullptr;
	int capacity = 0;  // antalet filmer ((rad-antal/5)-1)
	int fad = 0;
	int numOfEle = 0;

	Movie movie;
	//movie.addMovie(movie);
//	movie.addMovie(movie);


	string line = "";
	ifstream myfile("movies.txt");
	if (myfile.is_open())
	{

		while (getline(myfile, line))
		{
			capacity++; 
			fad++;
			cout << line << '\n';
		}
		myfile.close();
	}

	else cout << "Unable to open file";

	/*
	ofstream myfile;
	myfile.open("movies.txt");

	int i, n = 0;
	int * p;
	cout << "How many numbers would you like to type? ";
	cin >> i;
	cin.ignore();
	p = new (nothrow) int[i];
	if (p == nullptr)          // if p gets thrown a null value frome earlier check we catch it and print an error message
		cout << "Error: memory could not be allocated";
	else
	{
		for (n = 0; n<i; n++)
		{
			cout << "Enter number: ";
			cin >> p[n];
		}
		myfile << "You have entered: ";
		for (n = 0; n<i; n++)
			myfile << p[n] << ", ";
		delete[] p;
	}

	
	myfile.close();
	*/

	
	



//	cout << "Ange arrayens kapacitet: "; // Skall ändras till int variablen som är i början av filen som ger antalet filmer
	//cin >> capacity;
	//cin.ignore();

	nrs = new int[capacity];

	for (int i = 0; i < fad; i++) // loopar efter antalet rader i textfilen
	{
		if (numOfEle == capacity)   // kallas endast för expansion
		{
			//expandera arrayen
			capacity++;
			int* temp = new int[capacity];
			for (int y = 0; y < numOfEle; y++)
			{
				temp[y] = nrs[y];
			}
			delete[] nrs;
			nrs = temp;

		}						// här skall raderna ifrån textfilen matas in i en dynamisk array.
		cout << "Mata in ett heltal: ";
		cin >> nrs[numOfEle++];

	}
	

	return 0;
}