#include<iostream>
#include "aHistogram.h"
#include <string>
using namespace std;


//internal helper method that return the index of the  max number in the vector
int aHistogram::findMaxIndex(vector<int> vctr, int maxPos) const
{
	int max = vctr.at(0);
	for (int i = 0; i < vctr.size(); ++i)
	{
		if (vctr.at(i) > max)
		{
			maxPos = i;
			max = vctr.at(i);
		}
	}
	return maxPos;
}

aHistogram::aHistogram()
{
	starCount = 0;
	maxIndex = 0;
	numbersRolled.resize(DIE_SIDES, 0);
}

aHistogram::~aHistogram()
{
	//the destructor will suffice
}

void aHistogram::update(int face)
{
	//store the rolls in a vector
	++numbersRolled.at(face);
}

void aHistogram::display()
{
	int i = 0, j = 0;
	
	maxIndex = findMaxIndex(numbersRolled, maxIndex);

	//make to histogram
	for (i = 1; i < numbersRolled.size(); ++i)
	{
		cout << " " << i << ": " << count(i) << "  ";
		starCount = ((double)numbersRolled.at(i) /numbersRolled.at(maxIndex)) * STAR_MAX;
		for (int k = 0; k < starCount; ++k)
		{
			cout << "x";
		}
		cout << endl;

	}
}

int aHistogram::count(int face) const
{
	return numbersRolled.at(face);
}

void aHistogram::clear()
{
	numbersRolled.clear();
	numbersRolled.resize(DIE_SIDES, 0);
}
