#pragma once
#include <iostream>
class Joueur
{
public:
	Joueur();
	~Joueur();
	void Saisir();
	void ChoisirCase();
	void Jouer(); 
	virtual bool Incorrect(); 
	virtual void ModifierCase();
protected:
	std::string pseudo;
};
