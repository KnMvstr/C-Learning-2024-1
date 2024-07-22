/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Les Pointeurs
#include<iostream>

/// Un pointeur c'est l'adresse d'une donnée dans la mémoire
/// Si on a un pointeur sur un entier on manipule alors l'adresse mémoire de la valeur pas la valeur elle-meme
/// Imaginons un tableau d'octets. Si on déclare un entier il s'étale sur 4 octets. 
/// L'adresse du premier octet permettant d'acceder à la valeur de l'entier

/// Pour déclarer un pointeur on déclare son type et son nom. 
/// Déclaration de pointeur : type + nom --> Type* nom;
/// Son type correspond a ce sur quoi il pointe (exemple = int* p_foo, char* p_bar ...)

/// Les pointeurs étant des adresse il est de bonne pratique de les intitialisé avec le pointeur null (globalement la valeur 0)
/// On utilise pour ce faire, nullptr (exemple = int* p_foo = nullptr)

/// Pour récupérer l'adresse d'une variable on utilisera adressof & 
/// Admettons une variable int a initilisaié à 0 : int a = 0
/// Je la récupère comme suit : int* p_a = &a

/// Je créé une fonction Foo qui prend en paramètre un pointeur générique.
/// Je ne veux pas modifier l'adresse de la valeur x mais le contenu de ce qui est à l'adresse de x.
/// Je rajoute un * devant x.

void Foo(int* x)
{
	// On peut remplacer par if (a) pour dire si jle pointeur est différent de nullptr
	// Ou if (!a) pour si le pointeur est nullptr
	if (x != nullptr) 
	{
		*x = 50;
	}
	
}

int main() {

	int a = 5;
	float b = 6;
	int c = 12;

	int* p_a= &a;// Le pointeur p_a de type int est égal à l'adresse de la variable int a.
	int* p_c = &c;// Le pointeur p_c de type int est égal à l'adresse de la variable int c. 
	float* p_b= &b; // Le pointeur p_b de type float est égal à l'adresse de la variable float b.

	std::cout << "La valeur de la variable a est : " << a << std::endl;
	std::cout << "La valeur de la variable b est : " << b << std::endl;

	std::cout << "L'adresse de a dans la mémoire est : " << p_a << std::endl;
	std::cout << "L'adresse de b dans la mémoire est : " << p_b << std::endl;

	std::cout << "La valeur sur le pointeur p_a est : " << *p_a << std::endl;
	std::cout << "La valeur sur le pointeur p_b est : " << *p_b << std::endl;
	std::cout << "La valeur sur le pointeur p_c est : " << *p_c << std::endl;

	Foo(&c); // J'utilise la fonction Foo pour modifier le contenu de c
	std::cout << "J'utilise la fonction Foo qui change le contenu sur le pointeur c "<< std::endl;
	std::cout << "La valeur sur le pointeur p_c est : " << *p_c << std::endl; // La valeur de a devient 50
	

	return  0;
}