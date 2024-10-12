#include "LSystem.h"

LSystem::LSystem(vector<char> initVector) {
	stringCode_ = initVector;
}

/*
F--> FF
X-- > F - [[X]+ X] + F[+FX] - X
F-[[X]+X]+F[+FX]-X
*/
void LSystem::computeLeafStep() {
	vector<char> nextStringCode;
	for (char element : stringCode_) {
		if (element == 'F') {
			nextStringCode.insert(nextStringCode.end(), { 'F','F' });
		}
		else if (element == 'X') {
			nextStringCode.insert(nextStringCode.end(), { 'F','-','[','[','X',']', '+', 'X', ']', '+', 'F', '[', '+', 'F', 'X', ']', '-', 'X'});
		}
		else {
			nextStringCode.push_back(element);
		}
	}
	stringCode_ = nextStringCode;
}

//F-- > F + F - F - FF + F + F - F
void LSystem::computeOLStep() {
	vector<char> nextStringCode;
	for (char element : stringCode_) {
		if (element == 'F') {
			nextStringCode.insert(nextStringCode.end(), { 'F', '+', 'F', '-', 'F', '-', 'F', 'F', '+', 'F', '+', 'F', '-', 'F'});
		}
		else {
			nextStringCode.push_back(element);
		}
	}
	stringCode_ = nextStringCode;
}

vector<char> LSystem::GetStringCode() const {
	return stringCode_;
}
