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
	virtual bool Incorrect() = 0; 
	virtual void ModifierCase() = 0;
protected:
	std::string pseudo;
};
