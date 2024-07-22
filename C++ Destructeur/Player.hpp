#pragma once
#include <string>

struct Player {
	std::string m_Name;
	int m_HitPoints;
	int m_Damages;
	int m_Bonus;
	// Si on a un pointeur dans notre structure d'objet, il ne sera pas trait� par le destructeur si ca n'est pas specifie.
	// La memoire ne sera pas lib�r� (voir implementation de ~Player)
	int* m_DataLeak; 

	/*Default Constructor*/
	Player();
	/*Copy Constructor*/
	Player(const Player& player);
	/*Constructor*/
	Player(const std::string& name, int hitPoints, int damage, int bonus);
	/*Destructor*/
	~Player();

	bool isDead();

	void Attack(Player& otherPlayer); //Pour attaquer on utilise une r�f�rence � une autre structure que la sienne.

};