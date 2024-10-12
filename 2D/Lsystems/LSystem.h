#pragma once
#include <vector>

using namespace std;

class LSystem
{
private :
	vector<char> stringCode_;

public :
	LSystem(vector<char> initVector);
	vector<char> GetStringCode() const;
	void computeLeafStep();
};

