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
	while (true){
		system("cls");
		cout << "     ANGES & DEMONS" << endl << endl;
		cout << "Voulez vous choisir la taille de la grille ? (Y/N)" << endl;
		string size;

		bool i = true;
		do{
			cin >> size;
			if (size == "Y" || size == "y"){
				cout << "Entrez la taille de la grille (impair et positif), vide pour valeur par défaut:";
				int dim;
				cin >> dim;
				partie = Partie(dim);
				i = false;
			}
			else if (size == "N" || size == "n"){
				partie = Partie();
				i = false;
			}
		} while (i == true);
		partie.TourDeJeu();
		return false;
	}
	return 0;
}

