#include "stdafx.h"
#include "Plateau.h"


Plateau::Plateau()
{
	dim = 35;
	gameboard = new Case*[dim];
	for (int i = 0; i < dim; i++){
		gameboard[i] = new Case[dim];
	}
}
Plateau::Plateau(const int& d){
	dim = abs(d);
	if (dim % 2 != 1){
		dim++;
	}
	gameboard = new Case*[dim];
	for (int i = 0; i <= dim; i++){
		gameboard[i] = new Case[dim];
	}
}

Plateau::~Plateau()
{
	delete[] gameboard;
}

void Plateau::Affiche(){
	system("cls");
	for (int i = 0; i < dim; i++){
		cout << " ";
		for (int j = 0; j < dim; j++){
			if (gameboard[i][j].GetBroken() == true){
				cout << " x";
			}
			else if (gameboard[i][j].GetFree() == false){
				cout << " o";
			}
			else{
				cout << " .";
			}
		}
		cout << endl;
	}
}
/*
void Plateau::SetDim(int d){
	dim = d;
}*/