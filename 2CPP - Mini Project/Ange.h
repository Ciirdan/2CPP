#pragma once
#include "Joueur.h"
class Ange :  virtual public Joueur
{
public:
	Ange(const std::string& pseudo, const int& dim);
	~Ange();
	virtual bool Incorrect(int x, int y, Plateau d);
	virtual void ModifierCase(Plateau d);
private:
	int ligne;
	int colonne;
};