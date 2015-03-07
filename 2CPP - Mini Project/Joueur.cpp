#include "stdafx.h"
#include "Joueur.h"


Joueur::Joueur()
{
}


Joueur::~Joueur()
{
}

int Joueur::Saisir(){
	int a = 0;
	cin >> a;
	return a;
}

Case* Joueur::ChoisirCase(Plateau d){
	int x = 0;
	int y = 0;

	do{
		cout << "  Tour de " << pseudo << ": " << endl;
		cout << "Ligne: ";
		int l = Saisir();
		cout << endl << "Colonne: ";
		int c = Saisir();
	} while (Incorrect(x, y, d) == false);

	return d.GetCase(x, y);
}

void Joueur::Jouer(Plateau d){
	Case* c = ChoisirCase(d);

	ModifierCase(c);
}