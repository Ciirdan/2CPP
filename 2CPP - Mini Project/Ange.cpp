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

bool Ange::Incorrect(int x, int y, Plateau d){
	if (d.GetStatusCase(x, y) == 1){

	}
	return true;
}
void Ange::ModifierCase(Plateau d){
	cout << "  Tour de " /*<< pseudo*/ << ": " << endl;
	cout << "Ligne: ";
	int l = getchar();
	cout << endl << "Colonne: ";
	int c = getchar();
}