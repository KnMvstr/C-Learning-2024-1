/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Les Classes

/// Constructeur par d�faut     (default constructor) pour donn�e des valeur par d�faut : ClassName();
/// Constructeur                (constructor) constructeur g�n�rique qui prend une liste d'argument : ClassName([param]);
/// Constructeur de copie       (copy constructor) constructeur pour cr�er une structure � partir d'une autre  : ClassName(const ClassName&);
/// Constructeur de d�placement (move constructor) 


#include<iostream> 
#include "Player.hpp"

int main() {

	{
		Player player0;
	}


	Player player1("Arthur", 52, 15);
	Player player2("Mike", 62, 16);
	Player player3("Gael", 58, 8);

	std::cout << player1.GetName() << std::endl;
	std::cout << player1.GetHitPoints() << std::endl;
	std::cout << player1.GetDamages() << std::endl;
	player1.SetDamages(10);

	if (player1.isDead()) {
		std::cout << player1.GetName() << " is dead" << std::endl;
	}
	else std::cout << player1.GetName() << " is alive" << std::endl;

	player1.Attack(player2);
	std::cout << player2.GetName() << std::endl;
	std::cout << player2.GetHitPoints() << std::endl;
	std::cout << player2.GetDamages() << std::endl;

	return 0;
}