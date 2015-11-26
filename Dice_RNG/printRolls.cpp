#include <vector>
#include <iostream>
using namespace std;

void printRolls(vector<int> vtrRolls)
{
	if (vtrRolls.size() > 6)
	{
		int startPos = 2;
		for (int i = 0; i < vtrRolls.size() - 1; ++i)
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
