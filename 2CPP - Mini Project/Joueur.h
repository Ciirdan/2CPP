#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include "Plateau.h"

class Joueur
{
public:
	Joueur();
	Joueur(const string& name);
	~Joueur();
	int Saisir();
	Case* ChoisirCase(Plateau d);
	void Jouer(Plateau p); 
	virtual bool Incorrect(int x, int y, Plateau d) = 0;
	virtual void ModifierCase(Case* c, Plateau d) = 0;
protected:
	string pseudo;
};
