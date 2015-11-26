#pragma once
#ifndef A_HISTOGRAM_H
#define A_HISTOGRAM_H
#include <vector>

class aHistogram
{
public:
	aHistogram();
	~aHistogram();
	void update(int face);
	void display(int maxLengthOfLine) const;
	void count(int face) const;
	void clear();

private:
	int maxCount;
	vector<int> numbersRolled;
	vector<string> xHolder;
	int const DIE_SIDES = 7; // one extra to not use 0

};

#endif A_HISTOGRAM_H