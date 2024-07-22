/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Conditions

#include<iostream>

int main()
{

	int hp = 10;
	float average = 0.0f;
	int age = 0;
	
	// <=, >=, ==, !=, && ,||
	// Ici avec <= permet de gérer un charactère dans le négatif
	if (hp <= 0)
	{
		std::cout << "The character is lowkey." << std::endl;
	}
	else
	{
		std::cout << "The character can keep on." << std::endl;
	};


	// Je demande de rentrer un moyenne - J'affiche la moyenne
	// Je renvoie un  message selon l'intervalle des 
	std::cout << "Entrez votre moyenne : ";
	std::cin >> average;
	if (average <= 9.0f) {
		std::cout << "Vous avez une moyenne de " << average << ": Redoublement envisagé" << std::endl;
	}
	else if (average <= 15.5f) {
		std::cout <<"Vous avez une moyenne de "<< average << ": Encouragement du conseil de classe" << std::endl;
	}
	else std::cout << "Vous avez une moyenne de " << average << ": Félicitations du corps professoral" << std::endl;





	// Test de majorité exemple simple + avec opérateur ternaire
	std::cout << "veuillez rentrer votre âge: " << std::endl;
	std::cin >> age;
	
	if (age <18) {
		std::cout << "Vous etes mineur" << std::endl;
	}
	else std::cout << "Vous etes majeur" << std::endl;

	// Test de majorité avec opérateur ternaire
	std::cout << "Vous etes " << (age < 18 ? "mineur" : "majeur") << std::endl;
	




	// Test ensemble de conditions 
	// Avoir 16 ans minimum OU etre accompagné de ses parents
	bool with_parents = true;

	if (age > 16 || with_parents)
	{
		std::cout << "Autorisé à rentrer dans le manège" << std::endl;
	}
	else std::cout << "Non autorisé à rentrer dans le manège" << std::endl;
	//Ici si j'ai 12 ans et moins je suis autorisé à rentré dans le manège avec l'accompagnement des parents




	// Avoir 16 ans minimum OU etre accompagné de ses parents ET avoir 12ans minimum
	std::cout << "Rentrez à nouveau votre age: ";
	std::cin >> age;
	if (age > 16 || with_parents && age>12)
	{
		std::cout << "Autorisé à rentrer dans le bureau de manège" << std::endl;
	}
	else std::cout << "Non autorisé à rentrer dans le bureau de manège" << std::endl;
	//Ici si j'ai 12 ans et moins je ne suis pas autorisé à rentré dans le manège suis autorise malgré l'accompagnement des parents

	return 0;
}