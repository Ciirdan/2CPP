#include "stdafx.h"
#include "Partie.h"


Partie::Partie(){
	plateau = Plateau();
	joueurs[0] = new Ange("Paul", plateau);
	joueurs[1] = new Demon("Michel");
}

Partie::Partie(int dim = 35)
{
	plateau = Plateau(dim);
	joueurs[0] = new Ange("Ange", plateau);
	joueurs[1] = new Demon("Demon");
}


Partie::~Partie()
{
}

void Partie::TourDeJeu(){
	while (true){
		for each(Joueur* j in joueurs){
			plateau.Affiche();
			(*j).Jouer(plateau);
			if ((*joueurs[0]).Victory(plateau)){
				cout << (*j).GetName() << " gagne !" << endl;
				goto exitLoop;
			}
		}
	}
exitLoop:;
}