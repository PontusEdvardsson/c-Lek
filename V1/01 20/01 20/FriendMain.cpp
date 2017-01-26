#include <iostream>
#include <string>
#include "Friend.h"

using namespace std;
					//ATT FIXA destruktor, dynamiska arrayer lek


const int CAP = 10;
void addFriend(Friend arr[], int& nrOf);
int main()
{
	//vector<Friend> friendA;

	//for (int i = 0; i < 3; i++)
	//{
	//	string str;
	//	int a;
	//	cout << "Enter a friend name: " << endl;
	//	getline(cin, str);
	//	cout << "Enter friend birthyear: " << endl;
	//	cin >> a;
	//	cin.ignore();

	//	friendA.push_back(Friend(str, a));

	//}
	//cout << "The third Friends birthyear is: " << friendA[0].getBirthYear() << endl;
	//

	Friend myFriends[CAP];

	int nrOfFriends = 0;

	

	addFriend(myFriends, nrOfFriends);
	addFriend(myFriends, nrOfFriends);
	addFriend(myFriends, nrOfFriends);



	//for (int i = 0; i < CAP; i++)
	//{
	//	cout << "Enter a birthyear: ";
	//	cin >> a;
	//	cin.ignore();

	//	cout << "Enter a Name: ";
	//	getline(cin, b);
	//	myFriends[i].setBirthYear(a);
	//	myFriends[i].setName(b);

	//}
	//for (int i = 0; i < CAP; i++)
	//{
	//	string astr = myFriends[i].getName;
	//	int aint = myFriends[i].getBirthYear;
	//	cout << "Friend " << i << " name: " << astr << ". Friend " << i << " birthyear: " << aint << endl;

	//}


	



	return 0;
}
// END MAIN

