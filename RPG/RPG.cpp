// RPG.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include"Guerrier.h"
#include"Arme.h"
#include"Magicien.h"
#include<iostream>

using namespace std;



int main()
{
	Magicien Dazzle;
	Guerrier Sven;

	Sven.attaquer(Dazzle);
	Dazzle.bouleDeFeu(Sven);
	Dazzle.bouleDeGlace(Sven);
	Dazzle.attaquer(Sven);
	Sven.boirePotion(40);
	Sven.bersek(Dazzle);
	Dazzle.changerArme("Scepter", 40);
	Dazzle.attaquer(Sven);

	//
	cout << "Sven" << endl;
	Sven.afficherEtat();
	cout << endl << "Dazzle" << endl;
	Dazzle.afficherEtat();


	cin.ignore();
    return EXIT_SUCCESS;
}

