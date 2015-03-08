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
	int* ChoisirCase(Plateau d);
	void Jouer(Plateau p); 
	virtual bool Incorrect(int x, int y, Plateau d) = 0;
	virtual void ModifierCase(Plateau d, int x, int y) = 0;
	virtual bool Victory(Plateau d) = 0;
	string GetName();
protected:
	string pseudo;
};
