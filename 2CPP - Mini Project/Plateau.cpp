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

int Plateau::GetStatusCase(const int& x, const int& y){
	return gameboard[x][y].GetStatus();
}

Case* Plateau::GetCase(const int& x, const int& y){
	return &gameboard[x][y];
}

void Plateau::Affiche(){
	system("cls");
	for (int i = 0; i < dim; i++){
		cout << " ";
		for (int j = 0; j < dim; j++){
			int status = gameboard[i][j].GetStatus();
			if (status == 1){		//Cassé
				cout << " x";
			}
			else if (status == 2){	//Ange
				cout << " o";
			}
			else if (status == 3){	//Vide
				cout << " .";
			}
		}
		cout << endl;
	}
}
