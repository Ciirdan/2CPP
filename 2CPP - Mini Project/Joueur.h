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
	virtual void Incorrect(); 
	virtual void ModifierCase();
protected:
	std::string pseudo;
};
