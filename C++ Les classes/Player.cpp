#include "Player.hpp"
#include <iostream>

bool Player::isDead()
{
	return m_HitPoints <= 0;
}

void Player::Attack(Player& otherPlayer)
{
	otherPlayer.m_HitPoints -= m_Damages;
}

/*Default Constructor*/
Player::Player()
	: m_Name("")
	, m_HitPoints(0)
	, m_Damages(0)
{
};

/*Copie Constructor*/
Player::Player(const Player& player)
	: m_Name(player.m_Name)
	, m_HitPoints(player.m_HitPoints)
	, m_Damages(player.m_Damages)
{
};

/*Constructor*/
Player::Player(const std::string& name, int hitPoints, int damages)
	: m_Name(name)
	, m_HitPoints(hitPoints)
	, m_Damages(damages)
{
};

/*Destructor*/

Player::~Player() {
	std::cout << "Destructor" << std::endl;
}

/*GETTER SETTER*/
/*Get Name*/
const std::string& Player::GetName() const 
{
	return m_Name;
};
/*Get HitPoints*/
int Player::GetHitPoints() const
{
	return m_HitPoints;
};
/*Get + Set Damages*/
int Player::GetDamages() const
{
	return m_Damages;
};
void Player::SetDamages(int damages) {
	m_Damages = damages;
}
