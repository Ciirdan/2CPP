#pragma once
#include "Plateau.h"
#include "Joueur.h"

class Partie
{
public:
	Partie();
	~Partie();
	void TourDeJeu();
private:
	Plateau plateau;
	Joueur *joueurs;
};

