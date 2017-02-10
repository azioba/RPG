#include "stdafx.h"
#include "Magicien.h"


Magicien::Magicien() : Personnage("nom", 80)
{
}

void Magicien::bouleDeFeu(Personnage &cible) 
{
	cible.recevoirdegats(30);
	utiliserMana(20);
}

void Magicien::bouleDeGlace(Personnage & cible)
{
	cible.recevoirdegats(20);
	utiliserMana(10);
}



Magicien::~Magicien()
{
}