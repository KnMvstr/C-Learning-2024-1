/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Guess the Number

#include<iostream>

int main()
{
	//On genere un eliste de nombre pseudo aléatoire. le temps étant  percu comme une constante aléatoire
	std::srand(time(nullptr));
	int mystery_number = std::rand() % 100; //J'initialise un nombre mystère, le modulo permet à std rand de faire un ensemble de division jusque tomber dans l'intervalle 0 - 100
	int max_try;
	std::cout << "En combien d'essai souhaitez vous trouver le nombre mystère (entre 1 et 8 essais) : ";
	do {
		std::cin >> max_try;
		if (max_try < 1 || max_try > 8) {
			std::cout << "Veuillez entrer un chiffre entre 0 et 8 inclus." << std::endl;
		}
	} while (max_try < 1 || max_try > 8); // Je permet à l'utilisateur de paramétrer son nombnre d'essai maximal.Je verifie dans un do while si il rentre dans l'intervalle autorisé
	int user_nbr;

	// Pour proposer chaque essai je fais un boucle for qui a chaque tour proposera à l'utilisateur d'entrer un nombre
	// Les affichages sont conditionné et nont pas besoin de dépendre du do while ils se réfère seulement à l'itération et à la valeur du nbr mystère proposé
	for (int i = max_try; i > 0; --i) {

		if (i == max_try) {
			std::cout << "Dseormais vous devez deviner le nombre mystere compris entre 0 et 100 inclus. Vous avez " << i << " essais restants : " ;
		}
		else if (i == 1){
			std::cout << "C'est votre dernier essai : " ;
		}
		else{ 
			std::cout << "Vous avez " << i << " essais restants : " ; 
		}

		do {
			std::cin >> user_nbr;
			if (user_nbr < 0 || user_nbr > 100) {
				std::cout << "Veuillez entrer un nombre entre 0 et 100 inclus." << std::endl;
			}
		} while (user_nbr < 0 || user_nbr > 100);

		if (user_nbr == mystery_number) {
            std::cout << "Felicitations! Vous avez trouve le nombre mystère!" << std::endl;
		break;
        } else if (user_nbr > mystery_number) {
            std::cout << "Plus petit." << std::endl;
        } else {
            std::cout << "Plus grand." << std::endl;
        }
		}

	std::cout << "Desole, vous avez epuise tous vos essais. Le nombre mystere etait " << mystery_number << "." << std::endl;

		return 0;
	}