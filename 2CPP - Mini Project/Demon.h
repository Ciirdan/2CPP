#pragma once
#include "Joueur.h"

class Demon : virtual public Joueur
{
public:
	Demon(const string& name);
	~Demon();
	virtual bool Incorrect(int x, int y, Plateau d);
	virtual void ModifierCase(Case* c, Plateau d);
};