#include "pch.h"
#include "framework.h"

#include "Utils.h"

#include <iostream>
#include <string>

double Utils::Console::GetDoubleFromUser(std::string message)
{
	std::cout << message;

	double input;
	std::cin >> input;

	return input;
}

int Utils::Console::GetIntFromUser(std::string message)
{
	std::cout << message;

	int input;
	std::cin >> input;

	return input;
}

std::string Utils::Console::GetStringFromUser(std::string message)
{
	std::cout << message;

	std::string input;
	std::cin >> input;

	return input;
}

void Utils::Console::PrintHeader(std::string message)
{
	std::string equalCharString = "";
	for (int i = 0; i < message.length(); i++) {
		equalCharString += '=';
	}
	
	std::cout << equalCharString << std::endl;
	std::cout << message << std::endl;
	std::cout << equalCharString << std::endl;
}
