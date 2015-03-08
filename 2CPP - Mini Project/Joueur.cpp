#include "stdafx.h"
#include "Joueur.h"

Joueur::Joueur(){

}

Joueur::Joueur(const string& name)
{
	pseudo = name;
}


Joueur::~Joueur()
{
}

int Joueur::Saisir(){
	int a = 0;
	cin >> a;
	return a;
}

int* Joueur::ChoisirCase(Plateau d){
	int coor[2];

	do{
		cout << "  Tour de " << pseudo << ": " << endl;
		cout << "Ligne: ";
		coor[0] = Saisir();
		cout << endl << "Colonne: ";
		coor[1] = Saisir();
	} while (Incorrect(coor[0], coor[1], d) == false);

	return coor;
}

void Joueur::Jouer(Plateau d){
	int* c = ChoisirCase(d);

	ModifierCase(d, c[0], c[1]);
}

string Joueur::GetName(){
	return pseudo;
}