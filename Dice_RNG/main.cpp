#include <iostream>
#include <vector>
#include "Utilities.h"

using namespace std;

int main()
{
	//initilize srand with seed 1
	int seed = 1;				//seed
	srand((time_t)seed);		//init srand with seed of 1
	const int DIE_SIDES = 6;	//const for side die sides
	vector<int> numbersRolled;	//initi vector
	int n = 0;					//number of rolls
	
	//get n number of rolls from the user
	cout << "How many rolls?" << endl;
	cin >> n;

	//init vector to the number of sides and all 0's
	numbersRolled.resize(DIE_SIDES,0);

	//roll the dice n times and store the number in a vector.
	storeRolls(numbersRolled, n);
	cout << endl;

	//print the count of rolls
	printRolls(numbersRolled);
	cout << endl;

	//print the Histogram of the rolls
	printHistogram(numbersRolled);
	cout << endl;
	
	cout << "How many rolls with two dice?" << endl;
	cin >> n;
	
	numbersRolled.clear();
	numbersRolled.resize((DIE_SIDES + DIE_SIDES), 0);

	//roll the dice n times and store the number in a vector.
	storeRolls(numbersRolled, n);
	cout << endl;

	//print the count of rolls
	printRolls(numbersRolled);
	cout << endl;

	//print the Histogram of the rolls
	printHistogram(numbersRolled);
	cout << endl;
	
	//catches the program before it ends
	cin >> n;
	
	return 0;
}