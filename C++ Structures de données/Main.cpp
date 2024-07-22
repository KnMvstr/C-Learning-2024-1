/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Structures de données
#include<iostream>
#include "Player.hpp"

int main() {

	Player player1;
	Player player2;
	Player player3;

	player1.m_Name = "Arthur";
	player1.m_HitPoints = 52;
	player1.m_Damages = 15;
	std::cout << player1.m_Name << std::endl;
	std::cout << player1.m_HitPoints << std::endl;
	std::cout << player1.m_Damages << std::endl;

	if (player1.isDead()) {
		std::cout << "Arthur is dead" <<std::endl;
	}
	else std::cout << "Arthur is alive" << std::endl;
	

	player2.m_Name = "Mike";
	player2.m_HitPoints = 52;
	player2.m_Damages = 16;
	player1.Attack(player2);
	std::cout << player2.m_Name << std::endl;
	std::cout << player2.m_HitPoints << std::endl;
	std::cout << player2.m_Damages << std::endl;

	return 0;
}