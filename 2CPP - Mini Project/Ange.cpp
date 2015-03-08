#include "stdafx.h"
#include "Ange.h"


Ange::Ange(const string& name, Plateau& d)
{
	pseudo = name;
	int dim = d.GetDim();

	ligne = dim / 2;
	colonne = dim / 2;

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
	if (status == 1 || status == 2 || (abs(ligne - x) + abs(colonne - y)) != 1){
		return false;
	}
	return true;
}

void Ange::ModifierCase(Plateau d, int x ,int y){
	Case** gameboard = d.GetGameboard();
	Case* oldC = &gameboard[ligne][colonne];

	(*oldC).SetFree(true);

	ligne = x;
	colonne = y;

	Case* newC = &gameboard[x][y];
	(*newC).SetFree(false);
}

bool Ange::Victory(Plateau d){
	if (colonne == 0 || ligne == 0 || ligne == d.GetDim() || colonne == d.GetDim()){
		return true;
	}
	Case** gameboard = d.GetGameboard();
	if (!Incorrect(ligne + 1, colonne, d) && !Incorrect(ligne, colonne + 1, d) && !Incorrect(ligne - 1, colonne, d) && !Incorrect(ligne, colonne - 1, d)){
		return true;
	}
	return false;
}