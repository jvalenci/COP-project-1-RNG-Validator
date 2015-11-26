

#include <iostream>
#include <vector>
using namespace std;

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
