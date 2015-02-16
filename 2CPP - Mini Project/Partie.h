#pragma once
#include "Plateau.h"
#include "Joueur.h"
#include "Ange.h"
#include "Demon.h"

class Partie
{
public:
	Partie();
	Partie(int dim);
	~Partie();
	void TourDeJeu();
private:
	Plateau plateau;
	Joueur *joueurs[2];
};

