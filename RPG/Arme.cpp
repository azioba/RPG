#include "stdafx.h"
#include "Arme.h"
#include <iostream>
#include <string>

using namespace std;


Arme::Arme()
{	
}

Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{
}

void Arme::changer(string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}

void Arme::afficher()
{
	cout << "Arme : " << m_nom << " (Dégâts : " << m_degats << ")" << endl;
}

int Arme::getDegats() const
{
	return m_degats;
}

int Arme::getMana() const
{
	return m_mana;
}


Arme::~Arme()
{
}
