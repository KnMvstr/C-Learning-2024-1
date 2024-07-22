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
	// Ici avec <= permet de g�rer un charact�re dans le n�gatif
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
		std::cout << "Vous avez une moyenne de " << average << ": Redoublement envisag�" << std::endl;
	}
	else if (average <= 15.5f) {
		std::cout <<"Vous avez une moyenne de "<< average << ": Encouragement du conseil de classe" << std::endl;
	}
	else std::cout << "Vous avez une moyenne de " << average << ": F�licitations du corps professoral" << std::endl;





	// Test de majorit� exemple simple + avec op�rateur ternaire
	std::cout << "veuillez rentrer votre �ge: " << std::endl;
	std::cin >> age;
	
	if (age <18) {
		std::cout << "Vous etes mineur" << std::endl;
	}
	else std::cout << "Vous etes majeur" << std::endl;

	// Test de majorit� avec op�rateur ternaire
	std::cout << "Vous etes " << (age < 18 ? "mineur" : "majeur") << std::endl;
	




	// Test ensemble de conditions 
	// Avoir 16 ans minimum OU etre accompagn� de ses parents
	bool with_parents = true;

	if (age > 16 || with_parents)
	{
		std::cout << "Autoris� � rentrer dans le man�ge" << std::endl;
	}
	else std::cout << "Non autoris� � rentrer dans le man�ge" << std::endl;
	//Ici si j'ai 12 ans et moins je suis autoris� � rentr� dans le man�ge avec l'accompagnement des parents




	// Avoir 16 ans minimum OU etre accompagn� de ses parents ET avoir 12ans minimum
	std::cout << "Rentrez � nouveau votre age: ";
	std::cin >> age;
	if (age > 16 || with_parents && age>12)
	{
		std::cout << "Autoris� � rentrer dans le bureau de man�ge" << std::endl;
	}
	else std::cout << "Non autoris� � rentrer dans le bureau de man�ge" << std::endl;
	//Ici si j'ai 12 ans et moins je ne suis pas autoris� � rentr� dans le man�ge suis autorise malgr� l'accompagnement des parents

	return 0;
}