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
	//delete[] gameboard; //Faux
}

int Plateau::GetDim(){
	return dim;
}

void Plateau::Affiche(){
	system("cls");
	for (int i = 0; i < dim; i++){
		cout << " ";
		for (int j = 0; j < dim; j++){

			if (gameboard[i][j].GetStatus() == 1){
				cout << " x";
			}
			else if (gameboard[i][j].GetStatus() == 2){
				cout << " o";
			}
			else if (gameboard[i][j].GetStatus() == 3){
				cout << " .";
			}
		}
		cout << endl;
	}
}
