//Game "Lost Tresure"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int Gold = 900;
	int adventures;
	int survivors;
	int killed;
	string leader;

	cout << " Welcome to The Lost Tresures " << endl;
	cout << " Please follow the instruction for your jorney " << endl;

	cout << " Enter quantity of survivors " << endl;

	cin >> adventures;


	cout << " Enter number less than the first one " << endl;

	cin >> killed;

	

	while(killed > adventures)
	{
		cout << " Error, please Follow the instruction " << endl;
		cout << " Enter number less than the first one " << endl;
		cin >> killed;

		if (killed < adventures)
		{
			continue;
		}
		
	}

	survivors = adventures - killed;

	cout << " Enter your last Name " << endl;

	cin >> leader;


	cout << "\n A brave group of " << adventures << " set out on a quest" << endl;
	cout << " In search of the lost tresure of the Ancient Dwarvers " << endl;
	cout << " A group was lead by a legendary adventure by name " << leader << endl;
	cout << " Along the way group was attacked by evil Ogres " << endl;
	cout << " Group defeat them because of the legendary rouge " << leader << " But the cost was too much " << endl;
	cout <<  " Group lost " << killed << " brave people " << endl;
	cout << " Leaving just a " << survivors << " survivors " << endl;
	cout << " Band was just about to give up but.... " << endl;
	cout << leader << " Spoted something and not just something that was a Gold " << endl;
	cout << " So the adventurist split up " << Gold << " Gold " << endl;
	cout << leader << " Held on an extra gold " << Gold / survivors << " To keep  things fair of course " << endl;

	return 0;
}
