#pragma once
#include "Joueur.h"
class Ange :  virtual public Joueur
{
public:
	Ange(const string& name, Plateau& d);
	~Ange();
	virtual bool Incorrect(int x, int y, Plateau d);
	virtual void ModifierCase(Case* c, Plateau d);
private:
	int ligne;
	int colonne;
};