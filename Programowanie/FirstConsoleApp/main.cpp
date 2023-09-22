#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>
#include "utills.h"

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();

int main() {
	task1();
	system("pause");
	system("cls");

	task2();
	system("pause");
	system("cls");

	task3();
	system("pause");
	system("cls");

	task4();
	system("pause");
	system("cls");

	task5();
	system("pause");
	system("cls");

	task6();
	system("pause");
	system("cls");

	task7();
	system("pause");
	system("cls");

	task8();
	system("pause");
	system("cls");

	task9();
}


/*
Podstawy programowania:

	1.
	2. Program obliczaj¹cy pole prostok¹ta.
	3. Program obliczaj¹cy objêtoœæ sto¿ka.
	4. Program obliczaj¹cy pole ko³a.
	5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
	6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
	7. Program obliczaj¹cy objêtoœæ kuli o promieniu r
	8. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
	9. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/

/// <summary>
/// Srednia dwoch liczb
/// </summary>
void task1() {
	printHeader("Srednia 2 liczb");

	double firstNumberFromUser = getDoubleFormUser("Podaj 1 liczbe: "),
		secondNumberFromUser = getDoubleFormUser("Podaj 2 liczbe: ");

	double avgOfTwoNumbers = (firstNumberFromUser + secondNumberFromUser) / 2.0;

	std::cout << "Srednia to: " << avgOfTwoNumbers << std::endl;
}

/// <summary>
/// Pole prostakata
/// </summary>
void task2() {
	printHeader("Pole prostokata");

	double heightFromUser = getDoubleFormUser("Podaj podstawe prostokata: "),
		baseFormUser = getDoubleFormUser("Podaj wysokosc prostokata: ");

	double areaOfRectangle = baseFormUser * heightFromUser;
	std::cout << "Pole prostakata to: " << areaOfRectangle << std::endl;
}

/// <summary>
/// Objetosc stozka
/// </summary>
void task3() {
	printHeader("Objetosc stozka");

	double heightFromUser = getDoubleFormUser("Podaj promien stozka: "),
		radiusFromUser = getDoubleFormUser("Podaj wysokosc stozka: ");

	double volumeOfCone = 1.0 / 3.0 * M_PI * pow(radiusFromUser, 2) * heightFromUser;
	std::cout << "Objetosc stozka: " << volumeOfCone << std::endl;
}


/// <summary>
/// Pole kola
/// </summary>
void task4() {
	printHeader("Pole kola");

	double radiusFromUser = getDoubleFormUser("Podaj promien kola: ");

	double areaOfCircle = M_PI * pow(radiusFromUser, 2);
	std::cout << "Pole kola to: " << areaOfCircle << std::endl;
}

/// <summary>
/// Wyrazenie a^2 + b^2
/// </summary>
void task5() {
	printHeader("Wyrazenie a^2 + b^2");

	double firstNumberFromUser = getDoubleFormUser("Podaj 1 liczbe: "),
		secondNumberFromUser = getDoubleFormUser("Podaj 2 liczbe: ");

	double firstNumberToPowerOfTwo = pow(firstNumberFromUser, 2),
		secondNumberToPowerOfTwo = pow(secondNumberFromUser, 2);

	double result = firstNumberToPowerOfTwo + secondNumberToPowerOfTwo;

	std::cout << "a^2 + b^2 to: " << result << std::endl;
}

/// <summary>
/// Pole trojkata
/// </summary>
void task6() {
	printHeader("Pole trojkata");

	double heightFromUser = getDoubleFormUser("Podaj wysokosc : "),
		baseFromUser = getDoubleFormUser("Podaj podstawe trojkata: ");

	double areaOfTriangle = pow(heightFromUser, 2) + pow(baseFromUser, 2);
	std::cout << "a^2 + b^2 to: " << areaOfTriangle << std::endl;
}

/// <summary>
/// Pole kuli
/// </summary>
void task7() {
	printHeader("Pole kuli");

	double radiusFromUser = getDoubleFormUser("Podaj promien kuli");

	double areaOfSphere = 4 * M_PI * pow(radiusFromUser, 2);
	std::cout << "Pole kola to: " << areaOfSphere << std::endl;
}

/// <summary>
/// Pole trapezu
/// </summary>
void task8() {
	printHeader("Pole trapezu");

	double firstBaseFromUser = getDoubleFormUser("Podaj pierwsza podstawe: "),
		secondBaseFromUser = getDoubleFormUser("Podaj druga podstawe: "),
		heigthFromUser = getDoubleFormUser("Podaj wysokosc podstawe: ");

	double areaOftrapeze = (firstBaseFromUser + secondBaseFromUser) * heigthFromUser * 1.0 / 2.0;
	std::cout << "a^2 + b^2 to: " << areaOftrapeze << std::endl;
}

/// <summary>
/// Srednia 3 liczb
/// </summary>
void task9() {
	printHeader("Srednia 3 liczb");

	double firstNumberFromUser = getDoubleFormUser("Podaj pierwsza liczbe: "),
		weightOfFirstNumber = getDoubleFormUser("Podaj wage pierwszej liczby: ");

	double secondNumberFromUser = getDoubleFormUser("Podaj druga liczbe: "),
		weightOfSecondNumber = getDoubleFormUser("Podaj wage drugiej liczby: ");

	double thirdNumberFromUser = getDoubleFormUser("Podaj trzecia liczbe: "),
		weigthOfThirdNumber = getDoubleFormUser("Podaj wage trzeciej liczby: ");

	//MOJE OCZY, TO BOLI XD
	double avgOfThreeNumbers = (firstNumberFromUser * weightOfFirstNumber +
		secondNumberFromUser * weightOfSecondNumber +
		thirdNumberFromUser * weigthOfThirdNumber) / 
		(weightOfFirstNumber + weightOfSecondNumber + weigthOfThirdNumber);

	std::cout << "a^2 + b^2 to: " << avgOfThreeNumbers << std::endl;
}