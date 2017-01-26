#include <iostream>
#include <string>
using namespace std;
	//                Objectorienterad programmering

	//Klass: "Mall", typbeskrivning av objektet.
	//		- Data inneh�ll : medlemsVariabler
	//		- Operationer (medlemsFunctioner som kan kallas p� via objektet)
	
	//Objekt: Instanser av klassen
	//		- Egna v�rden p� medlemsvariablen
	//		- Objektet kan exekvera de funktioner som �r specifierade i klassen


	//		Klassdiagram, LIML
	//	

class Circle
{
private:

	double radius;

public:
	void setRadius(double r)
	{
		radius = r;
	}
	double getArea()
	{
		return 3.14 * pow(radius, 2);
	}
	void printArea()
	{
		cout << 3.14 * pow(radius, 2);
	}
};

int main()		
{
	double test = 0;
	cin >> test;
	cin.clear();

	Circle circle;
	circle.setRadius(test);
	circle.printArea();

	

	return 0;
}
	// END MAIN
