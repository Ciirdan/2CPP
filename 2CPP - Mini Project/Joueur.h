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
	virtual bool Incorrect() = 0; 
	virtual void ModifierCase(Plateau d) = 0;
protected:
	std::string pseudo;
};
