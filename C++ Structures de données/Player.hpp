#pragma once
#include <string>

struct Player {
	std::string m_Name;
	int m_HitPoints;
	int m_Damages;

	bool isDead();

	void Attack(Player& otherPlayer); //Pour attaquer on utilise une référence à une autre structure que la sienne.

};