#include <iostream>

#include "..\Utills\Utills.h"

/// <summary>
/// Napisz funkcje która podzieli dwie liczby
/// </summary>
void task1() {
    Utills::Console::PrintHeader("Dzielenie dwoch liczb");

    double firstNumber = Utills::Console::GetDoubleFromUser("Podaj dzielna: "),
        secondNumber = Utills::Console::GetDoubleFromUser("Podaj dzielnik: ");

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