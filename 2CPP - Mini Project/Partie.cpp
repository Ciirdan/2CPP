#include "stdafx.h"
#include "Partie.h"


Partie::Partie(int dim)
{
	plateau = Plateau(dim);
	joueurs[0] = new Ange();
	joueurs[1] = new Demon();
}


Partie::~Partie()
{
}

void Partie::TourDeJeu(){

}