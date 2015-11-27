#include <iostream>
#include <vector>
#include <string>
using namespace std;

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




