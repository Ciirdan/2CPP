#include "stdafx.h"
#include "Ange.h"


Ange::Ange(const std::string& name,const int& dim = 35)
{
	pseudo = name;
	ligne = (dim / 2) + 1;
	colonne = (dim / 2) + 1;

}

Ange::~Ange()
{
}

bool Ange::Incorrect(int x, int y, Plateau d){
	int dim = d.GetDim();
	if (x > dim || y > dim || x < 0 || y < 0){
		return false;
	}

	int status = d.GetStatusCase(x, y);
	if (status == 1 || status == 2){
		return false;
	}
	if (abs(ligne - x) != 1 || abs(colonne - y) != 1){
		return false;
	}
	return true;
}

void Ange::ModifierCase(Case* c){
	
}