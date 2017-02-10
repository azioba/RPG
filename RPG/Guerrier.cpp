#include "stdafx.h"
#include "Guerrier.h"


Guerrier::Guerrier() : Personnage("nom")
{
}

void Guerrier::doublePoing(Personnage & cible) const
{
	cible.recevoirdegats(30);
}

void Guerrier::bersek(Personnage & cible)
{
	cible.recevoirdegats(40);
	utiliserMana(10);
}




Guerrier::~Guerrier()
{
}
