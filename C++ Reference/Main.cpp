/// \file Main.cpp
/// \author KnMvstr
/// \project C++ Les Reference
#include <iostream>

// Les references ont �t� introuite en C++ pour en partie remplacer les pointeurs

void Foo(int* x) 
{
	*x = 42;
}

void Foo(int& x)
{
	x = 42;
}

int main() {
	int a = 5;

	//Pointeur 
	// Ici &a signifie addressof
	// Peut ne pas �tre initialis�
	// Peut etre nullptr
	int* ptr_a = &a; 

	// Reference
	// Ici int& a signifie referenceof
	// ref_a devient un alias de a
	// Une r�ference doit n�cessairement �tre initialis�.
	// Un r�ference ne peut pas �tre null
	int& ref_a = a;

	// Constant : s'applique toujours sur l�lement de gauche
	const int b = 0; /* Un entier constant qui vaut 0 */
	int const c = 0; /* Un entier constant qui vaut 0 */

	int const* const ptr = nullptr;/* Un  pointeur constant sur un entier constant*/
	const int* const ptr_2 = nullptr; /* Un  pointeur constant sur un entier constant*/


	std::cout << ref_a << std::endl; // valeur de a
	std::cout << sizeof(ref_a)<<" octets"<< std::endl; // taille de a en m�moire


	return 0;
}