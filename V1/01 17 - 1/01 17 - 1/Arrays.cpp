#include <iostream>
#include <string>
using namespace std;

const int CAP = 4;

int main()
{
	int pos = -1;
	// statiskt allokerad array skapas i komipleringsfasen i den delen av ram-minnet som heter stacken
	double value[CAP] = { 0.0 };
	value[2] = 19.27;

	string name[] = { "Bo","Anna","Nisse","Kajsa" };

	string search = "";
	cin >> search;
	cin.ignore();
	for (int i = 0; i < 4 && pos==-1; i++)
	{
		if (search==name[i])
		{	
			pos = i;
		}
	}
	if (pos == -1)
	{
		cout << search << "finns inte med" << endl;

	}
	else
	{

		cout << search << " finns på position: " << pos << endl;
	}

	return 0;
}