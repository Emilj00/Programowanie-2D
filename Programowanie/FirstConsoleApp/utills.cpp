#include <iostream>
#include "utills.h"

void printHeader(std::string textToPrint) {
	std::cout << "=======================" << std::endl;
	std::cout << textToPrint << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << std::endl;
}

double getDoubleFormUser(std::string message) {
	double numberFromUser;

	std::cout << message;
	std::cin >> numberFromUser;
	
	return numberFromUser;
}