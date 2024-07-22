/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Dynamique allocation

// Si on doit ecrire un programme qui demande à utilisateur de rentrer ses notes de l'années puis de les stocker dans un tableau. 
// Ne sachant pas à lavance le nombre de note le programme sera incapable de les stocker.
// Vu qu'on lui demande quand même une quantité de mémoire et que le programme ne peut pas savoir quand la reprendre il faut lui rendre manuellement.
// Pour eviter la fuite mémoire.

// En C++ pour allouer la mémoire dynamiquement on utilise les opérateurs new et delete equivalent à malloc() et free() du C.
// new sert à allouer la mémoire
// delete sert à la rendre 

// Si on veut allouer dynamiquement un entier on écrira int* ptr = new int;
// C++ allouera dynamiquement le nombre d'octet et retournera automatiquement le bon pointeur.
// Pour le libérer on appelle delete ptr
#include <iostream>
#include "Function.hpp"



int main() {

	int number = 0;

	std::cout << "Entrer un numero a stocker dans le tableau : ";
	std::cin >> number;

	int* array = new int[number];

	// Chaque valeur du tableau prend la valeur de son index et on itère jusque number.
	for (int i = 0; i < number; ++i) {
		array[i] = i;
	}

	DisplayArray(array, number);


	delete[] array;

	
	return 0;
}