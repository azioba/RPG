#include "stdafx.h"
#include "Personnage.h"
#include<iostream>
#include <string>

using namespace std;


Personnage::Personnage(string nom, int vie, int mana) :m_vie(vie),m_mana(mana)
{

}

void Personnage::recevoirdegats(int Degats)
{
	m_vie -= Degats;
}

void Personnage::utiliserMana(int Mana)
{
	m_mana -= Mana;
}

void Personnage::boirePotion(int quantite)
{
	m_vie += quantite;

	if (m_vie > 100)
	{
		m_vie = 100;
	}
}

void Personnage::changerArme(string nomNvleArme, int degatsNvleArme)
{
	m_arme.changer(nomNvleArme, degatsNvleArme);
}

void Personnage::afficherEtat()
{
	cout << "Vie : " << m_vie << endl;
	cout << "Mana : " << m_mana << endl;
}

bool Personnage::estVivant()
{
	if (m_vie > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

void Personnage::attaquer(Personnage &cible) const
{
	cible.recevoirdegats(10);
	
}

Personnage::~Personnage()
{
}