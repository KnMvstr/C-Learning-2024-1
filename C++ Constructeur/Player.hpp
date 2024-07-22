#pragma once
#include <string>

struct Player {
	std::string m_Name;
	int m_HitPoints;
	int m_Damages;
	int m_Bonus;

	/*Default Constructor*/
	Player();
	/*Copy Constructor*/
	Player(const Player& player);
	/*Constructor*/
	Player(const std::string& name, int hitPoints, int damage, int bonus);

	bool isDead();

	void Attack(Player& otherPlayer); //Pour attaquer on utilise une référence à une autre structure que la sienne.

};