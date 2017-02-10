#pragma once

#include<iostream>
#include"Personnage.h"

class Magicien :public Personnage
{
public:
	Magicien();
	void bouleDeFeu(Personnage &cible);
	void bouleDeGlace(Personnage &cible);
	~Magicien();

private:
	int m_mana;
};
