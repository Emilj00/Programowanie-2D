#include <iostream>
#include "utills.h"

void printHeader(std::string textToPrint) {
	std::cout << "=======================" << std::endl;
	std::cout << textToPrint << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << std::endl;
}

int generateRandomNumber(int minValue, int maxValue) {
	srand(time(NULL));

	int randomNum = rand() % (maxValue + 1) + minValue;

	return randomNum;
}

#pragma region Inputs from users

int getIntFromUser(std::string message) {
	int numberFromUser;

	std::cout << message;
	std::cin >> numberFromUser;

	return numberFromUser;
}

double getDoubleFromUser(std::string message) {
	double numberFromUser;

	std::cout << message;
	std::cin >> numberFromUser;
	
	return numberFromUser;
}

std::string getStringFromUser(std::string message) {
	std::string textFromUser;

	std::cout << message;
	std::cin >> textFromUser;

	return textFromUser;
}

#pragma endregion
