#pragma once
#include "Joueur.h"

class Demon : virtual public Joueur
{
public:
	Demon(std::string name);
	~Demon();
	virtual bool Incorrect();
	virtual void ModifierCase();
};