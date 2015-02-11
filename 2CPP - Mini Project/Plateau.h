#pragma once
#include "Case.h"

class Plateau
{
public:
	Plateau();
	~Plateau();
	void Affiche();
	
private:
	Case **gameboard;
	int dim;
};

