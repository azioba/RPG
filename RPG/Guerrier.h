#pragma once

#include<iostream>
#include"Personnage.h"

class Guerrier :public Personnage
{
public:
	Guerrier();
	void doublePoing(Personnage &cible) const;
	void bersek(Personnage &cible);

	~Guerrier();

private:



};
