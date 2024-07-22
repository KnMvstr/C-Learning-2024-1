/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Boucle

#include<iostream>

int main()
{
	// Afficher les nombres de 1 � 10
	for (int i = 0; i <= 10; ++i) {
		std::cout << i << std::endl;
	};



	// Afficher les nombres de 1 � N
	int N = 0; //Je cr�e une variable N init � 0
	std::cout << "Jusque combien souhait� vous compter : ";
	std::cin >> N; // L'utilisateur rentre sa valeur
	for (int i = 0; i <= N; ++i) {
		std::cout << i << std::endl;
	};



	// Afficher la table de multiplication d�sir� d'un utilisateur
	int table = 0;
	std::cout << "Quelle table souhaitez vous tester :  ";
	std::cin >> table;
	for (int i = 0; i <= 10; ++i) {
		std::cout << table << "*" << i << "=" << table * i << std::endl;
		// resulte en 3*0=0, 3*1=3, 3*2=6 etc...
	};




	// Suite g�om�trique sur boucle for 
	// La suite g�om�trique se caract�rise par le fait de connaitre le terme pr�c�dent
	int terme = 4; // Terme initial
	int raison = 3;// La raison
	int iter = 0;
	std::cout << "Rentrez un nbr d'it�rations pour la suite g�om�trique :  ";
	std::cin >> iter;
	for (int i = 0; i < iter; ++i) {
		terme *= raison; //terme = terme * raison;

	}
	std::cout << terme << std::endl;
	// resulte en 108 si iter=3


	

	// BOUCLE WHILE 
	// Utilis� dans les cas o� on ne connait pas quand aura lieu la fin de la boucle
	// On en connait la condition de boucle
	// Affichons un message tant que une certaine condition est rempli
	/* while (true){} Boucle infini, le programme ne sortira jamais. On pourrait en sortant */
	int index = 0; // Si cette index � une valeur di�f�rente d�s le d�part la premiere boucle ne sera meme pas soumise
	while (index == 0) {
		std::cout << "Nous sommes dans la premiere boucle, while, (0 OK !0 OUT) mettez un chiffre : " << std::endl;
		std::cin >> index;
		if (index != 0) {
			std::cout << "Index a une valeur differente de celle attendu. Nous sortons de cette boucle" << std::endl;
		}//Tant que index est �gal � 0 je redemande la valeur de index. Si on rentre autre chose que 0 on sort de la boucle.
	}

	//Le Do While sur le m�me principe
	do {
		std::cout << "Nous sommes dans la seconde boucle, do while, (0 OK !0 OUT) mettez un chiffre : " << std::endl;
		std::cin >> index;
		if (index != 0) {
			std::cout << "Index a une valeur differente de celle attendu. Nous sortons de cette boucle" << std::endl;
		}
	} while (index == 0);
	// Dans le while simple si la valeur de index est init � diff�rent de 0 avant de rentrer dans la boucle on ne rentre pas dans la boucle
	// Dand le do while si la valeur est init � autre chose que 0 on passe quand m�me dans la premi�re partie de la d�claration.



	// BOUCLE WHILE + BREAK
	// On peut forcer la sortie d'une boucle selon une condition if.
	
	while (true) { // Tant que la condition que la boucle contient en son sein est true
		int break_index = 5;
		std::cout << "Nous sommes dans la troisieme boucle, while + break, (<4 OUT >=4 OK) mettez un chiffre : " << std::endl;
		std::cin >> break_index;

		if (break_index < 4) {
			std::cout << "Le chiffre propose est plus petit que la condition donne. Aboutissant sur un break." << std::endl;
			break;
		}
	}


	


	return 0;
}