/// \file  Main.cpp
/// \author  KnMvstr
/// \project C++ Variable Operators Stream

#include<iostream>

int main()
{
	// type name;
	// char - character             - 'assim'
	// int - integer                - 50 , 26, 96
	// float - floating points      - 4.2f
	// double - double presicion    - 5.0
	int age = 42;
	float mark = 18.5f;
	double height = 200.5;

	//Initialization
	// variabel name = value
	age = 42;
	
	// Operators : + * - / % & |
	int a = 50;
	int b = 40;
	int c = a + b + 10 - 2*3;
	int d = 0, e = 0; //Shorten way to declare variable with value

	float r = 10.0f * 30.0f;

	std::cout << "Hello World" <<std::endl;
	std::cout << r << std::endl;
	std::cout << r/a << std::endl;


	// Display current age - change age through cin - display new age
	std::cout << "How old are you : "; //No endl so I dont get the end line struct
	std::cin >> age;
	std::cout << "I understand, you are: " << age << std::endl;
	std::cin.ignore();

	//Je créé un flux qui vient définir les valeurs de plusieurs variables
	std::cout << "Enter a then b value : ";
	std::cin >> d >> e ;
	std::cout << "You've entered " << d << " as value for a and " << e << " as value for e." << std::endl;
	std::cin.ignore();

	return 0;
}