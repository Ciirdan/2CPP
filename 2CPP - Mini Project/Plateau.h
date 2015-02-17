#pragma once
#include "Case.h"
#include <iostream>
#include <cmath>
using namespace std;

static class Plateau
{
public:
	Plateau();
	Plateau(const int& d);
	~Plateau();
	void Affiche();
private:
	Case **gameboard;
	int dim;
};

