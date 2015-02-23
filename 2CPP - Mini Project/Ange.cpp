#include "stdafx.h"
#include "Ange.h"


Ange::Ange(const std::string& name,const int& dim = 35)
{
	pseudo = name;
	ligne = (dim / 2) + 1;
	colonne = (dim / 2) + 1;

}


Ange::~Ange()
{
}

bool Ange::Incorrect(){
	
	return true;
}
void Ange::ModifierCase(Plateau d){
	cout << "  Tour de l'ange" << endl;
	cout << "Ligne: ";
	int l = getchar();
	cout << endl << "Colonne: ";
	int c = getchar();
}