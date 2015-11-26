#include <iostream>
#include <vector>
#include "StoreRolls.h"
#include "PrintHistogram.h"
#include "PrintRolls.h"
#include "aDice.h"
#include "aHistogram.h"

using namespace std;

int main()
{
	//initilize srand with seed 1
	int seed;					//seed
	int n = 0;					//number of rolls

	//instantation
	aDice die;
	aHistogram histo;
	
	//ask user for seed
	cout << "Enter Seed" << endl;
	cin >> seed;
	cout << endl; // for spacing

	//inti srand
	srand((time_t)seed);
	//get n number of rolls from the user
	cout << "How many rolls?" << endl;
	cin >> n;
	cout << endl; // for spacing

	
//depending on the number of rolls you wish to roll this block stores what you rolled.
	for (int i = 0; i < n; ++i)
	{
		histo.update(die.roll());
	}

	histo.display();
	/*
	
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
	*/

	//catches the program before it ends
	cin >> n;
	
	return 0;
}