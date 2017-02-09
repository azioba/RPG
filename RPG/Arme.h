#pragma once

#include<string>

class Arme
{
public:
	Arme();
	Arme(std::string m_nom, int degats);
	void changer(std::string m_nom, int degats);
	void afficher();
	int getDegats() const;
	~Arme();

private:
	std::string m_nom;
	int m_degats;
};
