#pragma once
#include "Joueur.h"
class Ange : public Joueur
{
public:
	Ange();
	~Ange();
	virtual bool Incorrect();
	virtual void ModifierCase();
private:
	int ligne;
	int colonne;
};