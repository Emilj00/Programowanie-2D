// Utills.cpp : Definiuje funkcje biblioteki statycznej.
//

#include "pch.h"
#include "framework.h"


#include "Utills.h"

#include <iostream>
#include <string>

double Utills::Console::GetDoubleFromUser(std::string message)
{
	std::cout << message;

	double input;
	std::cin >> input;

	return input;
}

int Utills::Console::GetIntFromUser(std::string message)
{
	std::cout << message;

	int input;
	std::cin >> input;

	return input;
}

std::string Utills::Console::GetStringFromUser(std::string message)
{
	std::cout << message;

	std::string input;
	std::cin >> input;

	return input;
}

void Utills::Console::PrintHeader(std::string message)
{
	for (int i = 0; i < message.length(); i++) {
		std::cout << "=";
	}
	std::cout << std::endl;

	std::cout << message << std::endl;

	for (int i = 0; i < message.length(); i++) {
		std::cout << "=";
	}
	std::cout << std::endl;
}
