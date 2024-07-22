#include "Player.hpp"

bool Player::isDead()
{
	return m_HitPoints <= 0;
}

void Player::Attack(Player& otherPlayer)
{
	otherPlayer.m_HitPoints -= m_Damages;
}