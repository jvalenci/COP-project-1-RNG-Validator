#include "aDice.h"
#include <iostream>
using namespace std;

//constructor
aDice::aDice()
{
	//the default will suffice
}

//destructor
aDice::~aDice()
{
	//the default will suffice.
	

}

//roll dice
int aDice::roll() 
{
	return ((rand() % 6) + 1); // returns a number between 1-6 to represent a die roll
}

