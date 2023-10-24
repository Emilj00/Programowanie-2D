#include <iostream>

#include "..\Utils\Utils.h"

void numberGuesser() {
	Utils::Console::PrintHeader("Number guesser");

	srand(NULL);
	int randomNumber = rand() % 10 + 1;
	int numberFromUser = 0;

	do
	{
		numberFromUser = Utils::Console::GetIntFromUser("Podaj liczbe od 1-10: ");
		
		if (numberFromUser > randomNumber) {
			std::cout << "Twoja jest za duza!" << std::endl;
		}
		else if (numberFromUser < randomNumber) {
			std::cout << "Twoja liczba jest za mala!" << std::endl;
		}
	} while (randomNumber != numberFromUser);

	std::cout << "Wygrales!!";
}

int main() {
	numberGuesser();
}
