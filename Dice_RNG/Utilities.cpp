#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int findMaxIndex(vector<int> vctr, int maxPos);

//rolls a 6 sided dice
int rollDice()
{
	return (rand() % 6);
}

//stores rolls into a vector
void storeRolls(vector<int>& vtrRolls, int n)
{
	//store this way if your rolling two dice
	if (vtrRolls.size() > 6) {
		for (int i = 0; i < n; ++i)
		{
			++vtrRolls.at((rollDice() + rollDice()));
		}
	}
	//store this way if your rolling one die
	else 
	{
		for (int i = 0; i < n; ++i)
		{
			++vtrRolls.at(rollDice());
		}
	}
	
}

//prints the vector with the amount of rolls
void printRolls(vector<int> vtrRolls)
{
	if (vtrRolls.size() > 6)
	{
		int startPos = 2;
		for (int i = 0; i < vtrRolls.size() -1; ++i)
		{
			cout << startPos << "\t---- " << vtrRolls.at(i) << endl;
			++startPos;
		}
	}
	else {
		for (int i = 0; i < vtrRolls.size(); ++i)
		{
			cout << i + 1 << "\t---- " << vtrRolls.at(i) << endl;
		}
	}
}

//prints the vector histogram style
void printHistogram(vector<int> vtr)
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
	if(vtr.size() > 6)
	{
		int startPos = 2;
		for (int i = 0; i < vtr.size() -1; ++i)
		{
			cout << startPos << "\t" << xHolder.at(i) << endl;
			++startPos;
		}
	}
	else {
		for (int i = 0; i < vtr.size(); ++i)
		{
			cout << i + 1 << "\t" << xHolder.at(i) << endl;
		}
	}
}

//internal helper method that return the index of the  max number in the vector
int findMaxIndex(vector<int> vctr, int maxPos)
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



