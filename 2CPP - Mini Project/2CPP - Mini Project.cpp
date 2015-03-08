// 2CPP - Mini Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#include "Partie.h"
//#include "Plateau.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Partie partie;
newGame:;
	while (true){
		system("cls");
		cout << "     ANGES & DEMONS" << endl << endl;
		cout << "Voulez vous choisir la taille de la grille ? (Y/N)" << endl;
		string input;

		do{
			cin >> input;
			if (input == "Y" || input == "y"){
				cout << "Entrez la taille de la grille (impair et positif), vide pour valeur par défaut:";
				int dim;
				cin >> dim;
				partie = Partie(dim);
				break;
			}
			else if (input == "N" || input == "n"){
				partie = Partie();
				break;
			}
		} while (true);

		partie.TourDeJeu();

		cout << "Voulez vous faire une autre partie ? (Y/N)" << endl;
		string input2;

		do{
			cin >> input2;
			if (input2 == "Y" || input2 == "y"){
				goto newGame;
			}
			else if (input2 == "N" || input2 == "n"){
				goto endGame;
			}
		} while (true);
	}
endGame:;
	return 0;
}

