#include "Function.hpp"

// Corps de fonction de puissance
int power_custom(int number, int n)
{
	int result = 1;
	for (int i = 0; i < n; ++i) {
		result *= number;
	}
	return result;
};
// Corps de fonction des addition et des surcharges
int add_custom(int a, int b) { return a + b; }
float add_custom(float a, float b) { return a + b; }
float add_custom(int a, float b) { return a + b; }
