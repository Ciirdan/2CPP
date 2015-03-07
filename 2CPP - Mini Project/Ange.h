#pragma once
#include "Joueur.h"
class Ange :  virtual public Joueur
{
public:
	Ange(const string& name, Plateau& d);
	~Ange();
	virtual bool Incorrect(int x, int y, Plateau d);
	virtual void ModifierCase(Plateau d, Case* c);
protected:
	int ligne;
	int colonne;
};