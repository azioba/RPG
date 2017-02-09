#include "stdafx.h"
#include "Personnage.h"


Personnage::Personnage(std::string nom, int vie) :m_vie(vie)
{

}

void Personnage::_recevoirdegats(int Degats)
{
	m_vie -= Degats;
}

void Personnage::_attaquer(Personnage &cible) const
{
	cible._recevoirdegats(10);
}

Personnage::~Personnage()
{
}