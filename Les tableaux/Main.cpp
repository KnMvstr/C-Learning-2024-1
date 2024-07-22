/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Les Tableaux
#include<iostream>

void ComputeTable(int table, int tableau[11]) 
// En parametre je d�clare un tableau de 11 index allant de 0 � 10
// Ainsi on match le range de la boucle for.
{
	for (int i = 0; i <= 10; ++i)  
	{
		tableau[i] = i * table;
	}
	
}

// Il faut une boucle qui vienne afficher tous les r�sultats
void DisplayTable(int tableau[11]) {
	for (int i = 0; i <= 10; ++i)
	{
		std::cout << tableau[i] << std::endl;
	}
}


int main() {
	int tableau[11] = { 0 }; // J'initialise toute les valeurs du tableau � 0
	ComputeTable(2, tableau);
	DisplayTable(tableau);
	return 0;
}