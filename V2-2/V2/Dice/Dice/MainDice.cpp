#include "Dice.h"
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <crtdbg.h>
using namespace std;

int main()
{
	srand(static_cast<unsigned>(time(0)));
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	/*
	Statiskt allokerat dice objekt
	Dice d1;
	Dice d2(17);
	d1.toss();
	int value = d1.getValue();
	cout << value << endl;
	*/
	/*
	Dice* d2 = new Dice[9];
	Dice* d3 = nullptr;
	d3 = new Dice[9];
	d3->toss();

	cout << d3->getValue() << endl;
	delete d3;
	*/
	/*
	Dice* d4 = new Dice[14];
	d4->toss();

	d4 = d3;
	*/
	/*
	Dice* d5 = nullptr;
	d5 = new Dice[3];   // Dynamiskt allokerad array inneh�llande dice objekt
	d5[1] = Dice(11);

	for (int i = 0; i < 3; i++)
	{
		d5[i].toss();
		cout << d5[i].getValue() << endl;
	}
	delete[] d5;
	*/
	Dice* *d7 = new Dice*[3]; // dubbelpekare f�rsta * f�r att allokera dynamiskt. ** f�r att dynamiskt allokera pekare
	Dice **d8 = nullptr;
	d8 = new Dice*[3];
	for (int i = 0; i < 3; i++)
	{
		d8[i] = nullptr; // initiera
	}
	d8[0] = new Dice(7);
	d8[1] = new Dice(19); // b�de arrayen med pekarna och dice objekten i heapen
	for (int i = 0; i < 2; i++)
	{
		d8[i]->toss();
		cout << d8[i]->getValue() << endl;
	}
	//beh�ver en forloop som deletar det pointersen pekar p�, sedan en f�r att deletar pointersen.
	for (int i = 0; i < 2; i++)
	{
		delete d8[i];   //deletar objekten som pekas p�
	}
	delete[] d8; //deletar arrayen, nu �r allt i heapen deletat

	/*
	Dice* d6[4] = {nullptr}; // statiskt allokerad array inneh�llande Dice pekare med v�rde null
	d6[0] = new Dice(12);
	d6[1] = new Dice(17);
	for (int i = 0; i < 2; i++)
	{
		d6[i]->toss();
		cout << d6[i]->getValue() << " ";
	}

	//�terl�mna objekten men inte arrayen
	for (int i = 0; i < 2; i++)
	{
		delete d6[i];
	}
	cout <<endl;
	*/


	//En pekare av typen dice kan anv�ndas f�r att
	//- peka ut ett dynamiskt allokerat objekt av typen Dice
	//- peka ut en dynamiskt allokerad array inneh�llande Dice-objekt
	
	
	
	return 0;
}