#pragma once
#include <iostream>
#include "Plateau.h"

class Joueur
{
public:
	Joueur();
	~Joueur();
	void Saisir();
	void ChoisirCase();
	void Jouer(Plateau p); 
	virtual bool Incorrect(int x, int y, Plateau d) = 0;
	virtual void ModifierCase(Plateau d) = 0;
protected:
	std::string pseudo;
};
