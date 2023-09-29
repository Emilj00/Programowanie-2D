#include <iostream>

#include "utills.h"

/// <summary>
/// Napisz funkcje która podzieli dwie liczby
/// </summary>
void task1() {
    printHeader("Dzielenie dwoch liczb");

    double firstNumber = getDoubleFromUser("Podaj dzielna: "),
        secondNumber = getDoubleFromUser("Podaj dzielnik: ");

    if (secondNumber == 0) {
        std::cout << "Nie mozna dzielic przez 0!!";
        return;
    }

    double result = firstNumber / secondNumber;
    std::cout << "Wynik dzielenie to: " << result;
}

int main() {
    task1();
}