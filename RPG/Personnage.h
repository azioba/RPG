#pragma once

#include <string>

class Personnage
{
public:
	Personnage(std::string nom, int vie = 100);
	void _attaquer(Personnage &cible) const;
	void _recevoirdegats(int Degats);
	void _boirePotion(int quantite);
	void afficherEtat();
	bool estVivant();
	~Personnage();
private:
	int m_vie;
	std::string m_nom;
};
