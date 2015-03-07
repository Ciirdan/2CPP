#include "stdafx.h"
#include "AngePuissant.h"


AngePuissant::AngePuissant(const string& name, Plateau& d, const int& p) : Ange(name, d)
{
	puissance = p;
}


AngePuissant::~AngePuissant()
{
}

bool AngePuissant::Incorrect(int x, int y, Plateau d){
	int dim = d.GetDim();
	if (x > dim || y > dim || x < 0 || y < 0){
		return false;
	}

	int status = d.GetStatusCase(x, y);
	if (status == 1 || status == 2 || abs(ligne - x) != puissance || abs(colonne - y) != puissance){
		return false;
	}
	return true;
}