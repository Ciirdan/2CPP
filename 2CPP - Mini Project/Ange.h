#pragma once
#include "Joueur.h"
class Ange :  virtual public Joueur
{
public:
	Ange(const std::string& pseudo, const int& dim);
	~Ange();
	virtual bool Incorrect();
	virtual void ModifierCase();
private:
	int ligne;
	int colonne;
};