#include "stdafx.h"
#include "Partie.h"


Partie::Partie(int dim)
{
	plateau = Plateau(dim);
	joueurs[0] = new Ange("Paul", dim);
	joueurs[1] = new Demon("Michel");
}


Partie::~Partie()
{
}

void Partie::TourDeJeu(){

}