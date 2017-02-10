#pragma once

#include<string>

class Arme
{
public:
	Arme();
	Arme(std::string nom, int degats);
	void changer(std::string nom, int degats);
	void afficher();
	int getDegats() const;
	int getMana() const;
	~Arme();

private:
	std::string m_nom;
	int m_degats;
	int m_mana;
};
