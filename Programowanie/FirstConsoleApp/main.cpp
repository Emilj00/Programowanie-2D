#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

#include "..\Utills\Utills.h"

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
	task9();
}


/*
Podstawy programowania:

	1. Program obliczaj�cy �redni� dw�ch liczb.
	2. Program obliczaj�cy pole prostok�ta.
	3. Program obliczaj�cy obj�to�� sto�ka.
	4. Program obliczaj�cy pole ko�a.
	5. Program obliczaj�cy warto�� wyra�enia a^2 + b^2.
	6. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h.
	7. Program obliczaj�cy obj�to�� kuli o promieniu r.
	8. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h.
	9. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/

/// <summary>
/// Program obliczaj�cy �redni� dw�ch liczb.
/// </summary>
void task1() {
	Utills::Console::PrintHeader("Srednia 2 liczb");

	double firstNumberFromUser = Utills::Console::GetDoubleFromUser("Podaj 1 liczbe: "),
		secondNumberFromUser = Utills::Console::GetDoubleFromUser("Podaj 2 liczbe: ");

	double avgOfTwoNumbers = (firstNumberFromUser + secondNumberFromUser) / 2.0;
	std::cout << "Srednia to: " << avgOfTwoNumbers << std::endl;
}

/// <summary>
/// Program obliczaj�cy pole prostok�ta.
/// </summary>
void task2() {
	Utills::Console::PrintHeader("Pole prostokata");

	double heightFromUser = Utills::Console::GetDoubleFromUser("Podaj podstawe prostokata: "),
		baseFormUser = Utills::Console::GetDoubleFromUser("Podaj wysokosc prostokata: ");

	double areaOfRectangle = baseFormUser * heightFromUser;
	std::cout << "Pole prostakata to: " << areaOfRectangle << std::endl;
}

/// <summary>
/// Program obliczaj�cy obj�to�� sto�ka.
/// </summary>
void task3() {
	Utills::Console::PrintHeader("Objetosc stozka");

	double heightFromUser = Utills::Console::GetDoubleFromUser("Podaj promien stozka: "),
		radiusFromUser = Utills::Console::GetDoubleFromUser("Podaj wysokosc stozka: ");

	double volumeOfCone = 1.0 / 3.0 * M_PI * pow(radiusFromUser, 2) * heightFromUser;
	std::cout << "Objetosc stozka: " << volumeOfCone << std::endl;
}


/// <summary>
/// Program obliczaj�cy pole ko�a.
/// </summary>
void task4() {
	Utills::Console::PrintHeader("Pole kola");

	double radiusFromUser = Utills::Console::GetDoubleFromUser("Podaj promien kola: ");

	double areaOfCircle = M_PI * pow(radiusFromUser, 2);
	std::cout << "Pole kola to: " << areaOfCircle << std::endl;
}

/// <summary>
/// Program obliczaj�cy warto�� wyra�enia a^2 + b^2.
/// </summary>
void task5() {
	Utills::Console::PrintHeader("Wyrazenie a^2 + b^2");

	double firstNumberFromUser = Utills::Console::GetDoubleFromUser("Podaj 1 liczbe: "),
		secondNumberFromUser = Utills::Console::GetDoubleFromUser("Podaj 2 liczbe: ");

	double firstNumberToPowerOfTwo = pow(firstNumberFromUser, 2),
		secondNumberToPowerOfTwo = pow(secondNumberFromUser, 2);

	double result = firstNumberToPowerOfTwo + secondNumberToPowerOfTwo;
	std::cout << "a^2 + b^2 to: " << result << std::endl;
}

/// <summary>
/// Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h.
/// </summary>
void task6() {
	Utills::Console::PrintHeader("Pole trojkata");

	double heightFromUser = Utills::Console::GetDoubleFromUser("Podaj wysokosc : "),
		baseFromUser = Utills::Console::GetDoubleFromUser("Podaj podstawe trojkata: ");

	double areaOfTriangle = heightFromUser * baseFromUser * 1.0 / 2.0;
	std::cout << "Pole trojkata: " << areaOfTriangle << std::endl;
}

/// <summary>
/// Program obliczaj�cy obj�to�� kuli o promieniu r.
/// </summary>
void task7() {
	Utills::Console::PrintHeader("Pole kuli");

	double radiusFromUser = Utills::Console::GetDoubleFromUser("Podaj promien kuli: ");

	double areaOfSphere = 4.0 / 3.0 * M_PI * pow(radiusFromUser, 3);
	std::cout << "Pole kola to: " << areaOfSphere << std::endl;
}
 
/// <summary>
/// Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h.
/// </summary>
void task8() {
	Utills::Console::PrintHeader("Pole trapezu");

	double firstBaseFromUser = Utills::Console::GetDoubleFromUser("Podaj pierwsza podstawe: "),
		secondBaseFromUser = Utills::Console::GetDoubleFromUser("Podaj druga podstawe: "),
		heigthFromUser = Utills::Console::GetDoubleFromUser("Podaj wysokosc podstawe: ");

	double areaOftrapeze = (firstBaseFromUser + secondBaseFromUser) * heigthFromUser * 1.0 / 2.0;
	std::cout << "pole trapezu to: " << areaOftrapeze << std::endl;
}

/// <summary>
/// Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
/// </summary>
void task9() {
	Utills::Console::PrintHeader("Srednia wazona 3 liczb");

	double firstNumberFromUser = Utills::Console::GetDoubleFromUser("Podaj pierwsza liczbe: "),
		weightOfFirstNumber = Utills::Console::GetDoubleFromUser("Podaj wage pierwszej liczby: ");

	double secondNumberFromUser = Utills::Console::GetDoubleFromUser("Podaj druga liczbe: "),
		weightOfSecondNumber = Utills::Console::GetDoubleFromUser("Podaj wage drugiej liczby: ");

	double thirdNumberFromUser = Utills::Console::GetDoubleFromUser("Podaj trzecia liczbe: "),
		weigthOfThirdNumber = Utills::Console::GetDoubleFromUser("Podaj wage trzeciej liczby: ");

	double sumOfThreeNumbers = firstNumberFromUser * weightOfFirstNumber +
		secondNumberFromUser * weightOfSecondNumber +
		thirdNumberFromUser * weigthOfThirdNumber;

	double sumOfWeights = weightOfFirstNumber + weightOfSecondNumber + weigthOfThirdNumber;

	double result = sumOfThreeNumbers / sumOfWeights;
	std::cout << "Srednia wazona 3 liczb to: " << result << std::endl;
}
