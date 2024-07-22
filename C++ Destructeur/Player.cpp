#include "Player.hpp"
#include <iostream>

bool Player::isDead()
{
	return m_HitPoints <= 0;
}

void Player::Attack(Player& otherPlayer)
{
	int totalDamages = m_Damages + m_Bonus;
	otherPlayer.m_HitPoints -= totalDamages;
}

/*Default Constructor*/
Player::Player()
	: m_Name("")
	, m_HitPoints(0)
	, m_Damages(0)
	, m_Bonus(0)
	, m_DataLeak(nullptr)
{
	m_DataLeak = new int(); //j'alloue dynamique de la mémoire sur le pointeur
};

/*Copie Constructor*/
Player::Player(const Player& player)
	: m_Name(player.m_Name)
	, m_HitPoints(player.m_HitPoints)
	, m_Damages(player.m_Damages)
	, m_Bonus(player.m_Bonus)
	, m_DataLeak(nullptr)
{
};

/*Constructor*/
Player::Player(const std::string& name, int hitPoints, int damage, int bonus)
	: m_Name(name)
	, m_HitPoints(hitPoints)
	, m_Damages(damage)
	, m_Bonus(bonus)
	, m_DataLeak(nullptr)
{
};

/*Destructor*/
// On peut mettre un message pour que s'affiche une indication à chaue fois que le destrcuteur est appelé
Player::~Player() {
	if (m_DataLeak != nullptr) //Si le pointeur est est différent du pointeur null on annule l'allocation de ressource memoire qui lui est réservé avec la supprésion de l'objet
	{
		delete m_DataLeak;
	}
	std::cout << "Destructor"<< std::endl;

}