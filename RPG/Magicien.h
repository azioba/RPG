#pragma once

#include<iostream>
#include"Personnage.h"

class Magicien :public Personnage
{
public:
	Magicien();
	void _bouleDeFeu() const;
	void _bouleDeGlace() const;
	~Magicien();

private:
	int m_mana;
};
