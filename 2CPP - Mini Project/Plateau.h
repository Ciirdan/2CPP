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
	void SetDim(const int& d);
	int GetStatusCase(const int& x, const int& y);
	Case* GetCase(const int& x, const int& y);
	Case** GetGameboard();
	void Affiche();
private:
	Case **gameboard;
	int dim;
};

