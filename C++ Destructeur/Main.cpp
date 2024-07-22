/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Destructeur
/// Constructeur par d�faut     (default constructor) pour donn�e des valeur par d�faut : ClassName();
/// Constructeur                (constructor) constructeur g�n�rique qui prend une liste d'argument : ClassName([param]);
/// Constructeur de copie       (copy constructor) constructeur pour cr�er une structure � partir d'une autre  : ClassName(const ClassName&);
/// Constructeur de d�placement (move constructor) 


#include<iostream> 
#include "Player.hpp"

int main() {

	// L'objet � un constructeur par d�fault declarer dans player.cpp.
	// Etant delarer sur la pile l'obet � une dur�e de vie defini dans le scope de ses accolade
	// A la fin des accolade il le destructeur est appel� tout seul
	{
		Player player0;
	}


	Player player1("Arthur", 52, 15, 6);
	Player player2("Mike", 62, 16, 3);
	Player player3("Gael", 58, 8, 6);

	std::cout << player1.m_Name << std::endl;
	std::cout << player1.m_HitPoints << std::endl;
	std::cout << player1.m_Damages << std::endl;

	if (player1.isDead()) {
		std::cout << player1.m_Name << " is dead" << std::endl;
	}
	else std::cout << player1.m_Name << " is alive" << std::endl;

	player1.Attack(player2);
	std::cout << player2.m_Name << std::endl;
	std::cout << player2.m_HitPoints << std::endl;
	std::cout << player2.m_Damages << std::endl;

	return 0;
}