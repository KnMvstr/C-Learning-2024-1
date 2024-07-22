#include "Player.hpp"

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
// Quand le langage est construit le compilateur va générer une liste d'initialisation et donné des valeur par défaut au proprietes.
// Pour eviter cela on déclare les valeur par défaut avec les brackets.
Player::Player() 
	: m_Name("")
    , m_HitPoints(0)
	, m_Damages(0)
	, m_Bonus(0)
{
}; 

/*Copie Constructor*/
Player::Player(const Player& player)
	: m_Name(player.m_Name)
	, m_HitPoints(player.m_HitPoints)
	, m_Damages(player.m_Damages)
	, m_Bonus(player.m_Bonus)
{
};

/*Constructor*/
Player::Player(const std::string& name, int hitPoints, int damage, int bonus)
	: m_Name(name)
	, m_HitPoints(hitPoints)
	, m_Damages(damage) 
	, m_Bonus(bonus)
{
};