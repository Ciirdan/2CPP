#pragma once
#include "Case.h"
#include <iostream>
using namespace std;

class Plateau
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

