#include <iostream>
#include <vector>
#include "aDice.h"
#include "aHistogram.h"
#include <time.h>

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
	cout << "Enter Seed, if you enter 0 the sequence will be completely random." << endl;
	cin >> seed;
	
	//inti srand
	if (seed == 0)
		srand(time(NULL));
	else
		srand((time_t)seed);

	cout << endl; // for spacing

	
	//get n number of rolls from the user
	cout << "How many rolls?" << endl;
	cin >> n;
	cout << endl; // for spacing

	
//depending on the number of rolls you wish to roll this block stores what you rolled.
	for (int i = 0; i < n; ++i)
	{
		histo.update(die.roll());
	}
	
	//prints the histogram
	histo.display();
	
	return 0;
}