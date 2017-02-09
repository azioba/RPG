#pragma once

#include<iostream>
#include"Personnage.h"

class Guerrier :public Personnage
{
public:
	Guerrier();
	void _doublePoing() const;
	void _bersek() const;

	~Guerrier();

private:



};
