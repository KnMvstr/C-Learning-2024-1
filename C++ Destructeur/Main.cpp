/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Destructeur
/// Constructeur par défaut     (default constructor) pour donnée des valeur par défaut : ClassName();
/// Constructeur                (constructor) constructeur générique qui prend une liste d'argument : ClassName([param]);
/// Constructeur de copie       (copy constructor) constructeur pour créer une structure à partir d'une autre  : ClassName(const ClassName&);
/// Constructeur de déplacement (move constructor) 


#include<iostream> 
#include "Player.hpp"

int main() {

	// L'objet à un constructeur par défault declarer dans player.cpp.
	// Etant delarer sur la pile l'obet à une durée de vie defini dans le scope de ses accolade
	// A la fin des accolade il le destructeur est appelé tout seul
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