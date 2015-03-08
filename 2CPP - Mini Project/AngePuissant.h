#pragma once
#include "Ange.h"

class AngePuissant : public Ange
{
public:
	AngePuissant(const string& name, Plateau& d, const int& puissance);
	~AngePuissant();
	virtual bool Incorrect(int x, int y, Plateau d);
	virtual bool Victory(Plateau d);
private:
	int puissance;
};

