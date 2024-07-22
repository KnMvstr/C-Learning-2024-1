/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Les Fonctions
#include<iostream>
#include "Function.hpp"

// Pour eviter de dupliquer le code on utilise des fonctions.
// En C++ pour déclarer une fonction on se place au dessus du main, on écrit son type de retour  et son paramètres avec son type.
// Déclaration de la fonction de calcul de puissance (prototype + corps de la méthode).
//int power_custom(int number, int n)
//{
//	int result = 1;
//	for (int i = 0; i < n; ++i) {
//		result *= number;
//	}
//	return result;
//};
// Déclaration de la fonction d'addition avec le prototype
//int add_custom(int a, int b);
// Déclaration de la fonction d'addition en utilisant la surcharge de fonction. la signature de méthode change
//float add_custom(float a, float b);
//float add_custom(int a, float b);



int main (){
	// Appelons la fonction custom pour calculer 2 au carré et 6 au cub puis 4 puissance 9. 
	// Si la fonction n'est pas déclaré au dessus du main ca ne fonctionne pas,à moins de déclarer à minima le prototype au dessu du main et le corps après le main
	std::cout << power_custom(2, 2) <<std::endl;
	std::cout << power_custom(6, 3) << std::endl;
	std::cout << power_custom(4, 9) << std::endl;
	// Appelons la fonction custom pour additionner 2 nombres. 
	std::cout << add_custom(4, 9) << std::endl;
	// Appelons la fonction custom pour additionner 2 nombres float. La bonne méthode est appelé via sa signature par le compilateur.
	std::cout << add_custom(4.5f, 9.2f) << std::endl;
	// Appelons la fonction custom pour additionner 2 nombres un float et un int. La bonne méthode est appelé via sa signature par le compilateur.
	std::cout << add_custom(4, 9.2f) << std::endl;

	// Dans un second temps on a créé un fichier function.hpp dans le folder header et un function.cpp dans le folder source.
	// le premier permet de mettre les prototypes de methode et verifie si le fichier n'est pas déjà inclus ailleurs.
	// Le second include le hpp permet de mettre les corps des méthodes.
	// In fine je met juste #include "Function.hpp" en haut de ce fichier et le comilateur fait le reste du travail.




	
		
	return 0;
}
//int add_custom(int a, int b) { return a + b; }
//float add_custom(float a, float b) { return a + b; }
//float add_custom(int a, float b) { return a + b; }