#include <iostream>

#include "..\Utils\Utils.h"
#include <vector>

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

void task12() {
	int numberFromUser = Utils::Console::GetIntFromUser("Podaj liczbe: ");

	int countOfNumbers = 0, newNumberFromUser = numberFromUser;
	
	while (newNumberFromUser != 0) {
		newNumberFromUser = newNumberFromUser / 10;
		countOfNumbers++;
	}

	std::cout << numberFromUser << " ma " << countOfNumbers << " liczb.";
}

void task14() {
	int numberFromUser = Utils::Console::GetIntFromUser("Podaj liczbe: ");

	int sum = 1;
	for (int i = 2; i <= numberFromUser / 2; i++) {
		

		if (numberFromUser % i == 0) {
			sum += i;
			std::cout << "Uzyta: " << i << std::endl;
		}
		else {
			std::cout << i << std::endl;
		}
	}

	if (sum / numberFromUser == 1) {
		std::cout << "Liczba jest jakastam";
	}
}

void pyramid(int size) {
	for (int i = 0; i <= size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			std::cout << " ";
		}
		
		for (int j = 0; j <= i * 2; j++) {
			std::cout << "*";
		}

		std::cout << std::endl;
	}
}


bool leetcode9(const int number) {
	if (number < 0) {
		return false;
	}
	int numbersCount = 0;
	int newNumber = number;

	while (newNumber > 0) {
		numbersCount++;
		newNumber %= 10;
	}

	char numbers[numbersCount];



	for (int i = 0; i < numbers.length(); i++) {
		int num = numbers[i];
		numbers[i] = numbers[numbers.length() - i];
		numbers[numbers.length() - i] = number;
	}
}

void leetcode9Test() {
	int numberFromUser = Utils::Console::GetIntFromUser("Podaj liczbe: ");
	
	bool isPalindrome = leetcode9(numberFromUser);
	if (isPalindrome) {
		std::cout << "Number is palindrome";
	}
	else {
		std::cout << "Number isn't palindrome";
	}
}

int main() {
	//numberGuesser();

	pyramid(14);
}
