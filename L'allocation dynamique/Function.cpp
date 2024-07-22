#include "Function.hpp"
#include <iostream>

// Corps de fonction DisplayArray
void DisplayArray(int* array, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << std::endl;
	}
}