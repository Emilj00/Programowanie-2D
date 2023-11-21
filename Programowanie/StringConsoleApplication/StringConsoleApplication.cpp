// StringConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Utils/Utils.h"

void task1() {

}

void task2() {
	std::string nameFromUser = Utils::Console::GetStringFromUser("Podaj swoje imie: ");
	std::cout << "Witaj " << nameFromUser;
}

int main() {
	main();
} 