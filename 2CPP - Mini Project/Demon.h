#pragma once
#include "Joueur.h"

class Demon : public Joueur
{
public:
	Demon();
	~Demon();
	virtual bool Incorrect();
	virtual void ModifierCase();
};