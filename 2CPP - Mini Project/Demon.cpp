#include "stdafx.h"
#include "Demon.h"


Demon::Demon(const string& name)
{
	pseudo = name;
}


Demon::~Demon()
{
}

bool Demon::Incorrect(int x, int y, Plateau d){
	int dim = d.GetDim();
	if (x > dim || y > dim || x < 0 || y < 0){
		return false;
	}

	int status = d.GetStatusCase(x, y);
	if (status == 1 || status == 2){
		return false;
	}
	return true;
}
void Demon::ModifierCase(Plateau d, int x, int y){
	Case** gameboard = d.GetGameboard();
	Case* c = &gameboard[x][y];
	(*c).SetBroken(true);
}

bool Demon::Victory(Plateau d){
	//Case** gameboard = d.GetGameboard();
	//for (int x = 0; x < d.GetDim(); x++){
	//	for (int y = 0; y < d.GetDim(); y++){
	//		if (gameboard[x][y].GetBroken() == false){

	//		}
	//	}
	//}
	return false;
}