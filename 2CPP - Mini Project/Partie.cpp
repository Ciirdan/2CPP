#include "stdafx.h"
#include "Partie.h"


Partie::Partie(){
	plateau = Plateau();
	joueurs[0] = new Ange("Paul", plateau.GetDim());
	joueurs[1] = new Demon("Michel");
}

Partie::Partie(int dim = 35)
{
	plateau = Plateau(dim);
	joueurs[0] = new Ange("Paul", dim);
	joueurs[1] = new Demon("Michel");
}


Partie::~Partie()
{
}

void Partie::TourDeJeu(){
	while (true){
		for each(Joueur* joueur in joueurs){
			(*joueur).Jouer(plateau);
		}
	}
}