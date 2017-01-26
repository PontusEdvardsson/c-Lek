#include <iostream>
#include <string>
using namespace std;

void foo(int nr1, string nr2);//funktionsdeklaration


int main()
{
	//Dynamiskt allokerad array skapas under ruuntime i heapen
	//size behöver inte ges av en constant variable
	//arrayexpandering
	
	int* nrs = nullptr;
	int capacity = 0;
	int numOfEle = 0;


	cout << "Ange arrayens kapacitet: ";
	cin >> capacity;
	cin.ignore();
	nrs = new int[capacity];
	
	for (int i = 0; i < 5; i++)
	{
		if (numOfEle == capacity)
		{
			//expandera arrayen
			capacity++;
			int* temp = new int[capacity];
			for (int y = 0; y < numOfEle ; y++)
			{
				temp[y] = nrs[y];
			}
			delete [] nrs;
			nrs = temp;

		}
		cout << "Mata in ett heltal: ";
		cin >> nrs[numOfEle++];

	}
	


	foo(5, "Hej"); // 5 och hej är aktuella parametrar


	return 0;
}

void foo(int nr1, string nr2) // funktionsdefinition
// nr1 och nr2 är formella parametrar
{
	for  (int i = 0;  i < nr1; i++)
	{
		cout << nr2 << endl;
	}
}