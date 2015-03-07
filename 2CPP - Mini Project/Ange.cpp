#include "stdafx.h"
#include "Ange.h"


Ange::Ange(const string& name, Plateau& d)
{
	ligne = (d.GetDim() / 2) + 1;
	colonne = (d.GetDim() / 2) + 1;

	Case** gameboard = d.GetGameboard();
	gameboard[ligne][colonne].SetFree(false);
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
	if (status == 1 || status == 2 || abs(ligne - x) != 1 || abs(colonne - y) != 1){
		return false;
	}
	return true;
}

void Ange::ModifierCase(Case* c, Plateau d){
	int dim = d.GetDim();
	Case** gameboard = d.GetGameboard();

	for (int x = 0; x <= dim; x++){
		for (int y = 0; y <= dim; y++){
			if (gameboard[x][y].GetFree() == false){
				gameboard[x][y].SetFree(true);
			}
		}
	}

	(*c).SetFree(false);
}