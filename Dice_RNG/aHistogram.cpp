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
}

void aHistogram::display(int maxLengthOfLine) const
{

}

void aHistogram::count(int face) const
{

}

void aHistogram::clear()
{

}
