#pragma once
#include "Joueur.h"

class Demon : virtual public Joueur
{
public:
	Demon(const string& name);
	~Demon();
	virtual bool Incorrect(int x, int y, Plateau d);
	virtual void ModifierCase(Plateau d, Case* c);
};