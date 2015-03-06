#pragma once
#include "Case.h"
#include <iostream>
#include <cmath>
using namespace std;

class Plateau
{
public:
	Plateau();
	Plateau(const int& d);
	~Plateau();
	int GetDim();
	int GetStatusCase(const int& x, const int& y);
	void Affiche();
private:
	Case **gameboard;
	int dim;
};

