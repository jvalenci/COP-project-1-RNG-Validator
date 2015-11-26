#pragma once
#ifndef A_HISTOGRAM_H
#define A_HISTOGRAM_H
#include <vector>
using namespace std;

class aHistogram
{
public:
	aHistogram();
	~aHistogram();
	void update(int face);
	void display();
	int count(int face) const;
	void clear();

private:
	int maxIndex;
	int starCount;
	vector<int> numbersRolled;
	vector<string> xHolder;
	int const DIE_SIDES = 7; // one extra to not use 0
	int const STAR_MAX = 60; // max number of stars to print
	int findMaxIndex(vector<int> vctr, int maxPos) const;

};

#endif A_HISTOGRAM_H