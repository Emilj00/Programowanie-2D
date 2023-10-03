// Utills.cpp : Definiuje funkcje biblioteki statycznej.
//

#include "pch.h"
#include "framework.h"

#include "Utills.h"

#include <string>
#include <iostream>

static class Utills {

public:
	static class Console {

	public:
		static double GetDoubleFromUser(std::string message) {
			std::cout << message;

			double input;
			std::cin >> input;

			return input;
		}
		static int GetIntFromUser(std::string message) {
			std::cout << message;

			int input;
			std::cin >> input;

			return input;
		}
		static std::string GetStringFromUser(std::string message) {
			std::cout << message;

			std::string input;
			std::cin >> input;

			return input;
		}


		static void PrintHeader(std::string message) {
			std::cout << "==============================";
			std::cout << message;
			std::cout << "==============================";
		}
	};
};