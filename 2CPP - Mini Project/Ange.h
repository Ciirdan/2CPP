#pragma once
#include "Joueur.h"
class Ange :  virtual public Joueur
{
public:
	Ange(const string& name, Plateau& d);
	~Ange();
	virtual bool Incorrect(int x, int y, Plateau d);
	virtual void ModifierCase(Plateau d, int x, int y);
	virtual bool Victory(Plateau d);
protected:
	int ligne;
	int colonne;
};