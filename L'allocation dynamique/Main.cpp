/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Dynamique allocation

// Si on doit ecrire un programme qui demande � utilisateur de rentrer ses notes de l'ann�es puis de les stocker dans un tableau. 
// Ne sachant pas � lavance le nombre de note le programme sera incapable de les stocker.
// Vu qu'on lui demande quand m�me une quantit� de m�moire et que le programme ne peut pas savoir quand la reprendre il faut lui rendre manuellement.
// Pour eviter la fuite m�moire.

// En C++ pour allouer la m�moire dynamiquement on utilise les op�rateurs new et delete equivalent � malloc() et free() du C.
// new sert � allouer la m�moire
// delete sert � la rendre 

// Si on veut allouer dynamiquement un entier on �crira int* ptr = new int;
// C++ allouera dynamiquement le nombre d'octet et retournera automatiquement le bon pointeur.
// Pour le lib�rer on appelle delete ptr
#include <iostream>
#include "Function.hpp"



int main() {

	int number = 0;

	std::cout << "Entrer un numero a stocker dans le tableau : ";
	std::cin >> number;

	int* array = new int[number];

	// Chaque valeur du tableau prend la valeur de son index et on it�re jusque number.
	for (int i = 0; i < number; ++i) {
		array[i] = i;
	}

	DisplayArray(array, number);


	delete[] array;

	
	return 0;
}