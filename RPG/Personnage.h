#pragma once

#include <string>
#include"Arme.h"

class Personnage
{
public:
	Personnage(std::string nom, int vie = 100, int mana = 100);
	void attaquer(Personnage &cible) const;
	void recevoirdegats(int Degats);
	void utiliserMana(int Mana);
	void boirePotion(int quantite);
	void changerArme(std::string nomNvleArme, int degatsNvleArme);
	void afficherEtat();
	bool estVivant();
	~Personnage();
private:
	int m_vie;
	int m_mana;
	int m_degats;
	Arme m_arme;
	std::string m_nom;
};
