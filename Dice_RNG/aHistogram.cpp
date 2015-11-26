#include<iostream>
#include "aHistogram.h"
using namespace std;

aHistogram::aHistogram()
{
	maxCount = 0;
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

void aHistogram::display(int maxLengthOfLine) const
{
	const int STAR_MAX = 60;
	int i = 0, j = 0;
	int maxIndex = 0;
	int starCount;
	vector<string> xHolder(vtr.size());

	maxIndex = findMaxIndex(vtr, maxIndex);

	//make to histogram
	for (i = 0; i < vtr.size(); ++i)
	{
		starCount = ((double)vtr.at(i) / vtr.at(maxIndex)) * STAR_MAX;
		for (int k = 0; k < starCount; ++k)
		{
			xHolder.at(i) += "x";
		}

	}
	//print the histogram
	for (int i = 0; i < vtr.size(); ++i)
	{
		cout << i + 1 << "\t" << xHolder.at(i) << endl;
	}

}

void aHistogram::count(int face) const
{
	cout << "You rolled " << face << " " << numbersRolled.at(face) << endl;
}

void aHistogram::clear()
{

}
