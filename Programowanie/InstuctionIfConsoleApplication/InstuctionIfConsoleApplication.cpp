#include <iostream>
#include "../Utills/Utills.h"

/// <summary>
/// Napisz funkcje która podzieli dwie liczby
/// </summary>
void task0() {
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



/*
1. Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta
2. Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
3. Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
4. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
6. Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
7. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
*/

/// <summary>
/// 1. Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta
/// </summary>
void task1() {
    Utills::Console::PrintHeader("Liczba jest parzysta czy nie?");

    int numberFromUser = Utills::Console::GetIntFromUser("Podaj liczbe: ");

    if (numberFromUser == 0) {
        std::cout << "Liczba jest rowna zero!";
        return;
    }

    std::cout << "Liczba jest" << (numberFromUser % 2 == 0 ? "" : "nie ") << " parzysta";
}

/// <summary>
/// 2. Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
/// </summary>
void task2() {
    Utills::Console::PrintHeader("Sprawdzenie czy liczba jest dodatnia, ujemna czy jest zerem");

    int numberFromUser = Utills::Console::GetIntFromUser("Podaj liczbe: ");

    if (numberFromUser > 0) {
        std::cout << "Liczba jest dodatnia";
    }
    else if (numberFromUser < 0) {
        std::cout << "Liczba jest ujemna";
    }
    else {
        std::cout << "Liczba jest zerem";
    }
}

/// <summary>
/// 3. Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
/// </summary>
void task3() {
    Utills::Console::PrintHeader("Sprawdzenie czy rok jest przestepny");

    int numberFromUser = Utills::Console::GetIntFromUser("Podaj rok: ");
    
    if (numberFromUser % 4 == 0) {
        std::cout << "Podany rok jest przestepny";
    }
    else {
        std::cout << "Podany rok nie jest przestepny";
    }
}

/// <summary>
/// 4. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
/// </summary>
void task4() {
    Utills::Console::PrintHeader("Oceny");

    int numberFromUser = Utills::Console::GetIntFromUser("Podaj ocene: ");

    switch (numberFromUser) {
        case 1:
            std::cout << "Niedostateczny";
            break;
        case 2:
            std::cout << "Dopuszczajacy";
            break;
        case 3:
            std::cout << "Dostateczny";
            break;
        case 4:
            std::cout << "Dobry";
            break;
        case 5:
            std::cout << "Bardzo dobry";
            break;
        case 6:
            std::cout << "Celujacy";
            break;
        default:
            std::cout << "Nie ma takiej oceny";
            break;
    }
}

/// <summary>
/// 5. Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
/// </summary>
void task5() {
    Utills::Console::PrintHeader("Logowanie");

    const std::string CORRECT_PASSWORD = "abc123";
    std::string passwordFromUser = Utills::Console::GetStringFromUser("Podaj haslo: ");

    if (passwordFromUser._Equal(CORRECT_PASSWORD)) {
        std::cout << "Zalogowano";
    }
    else {
        std::cout << "Logowanie nieudane";
    }
}


bool isDateValid(int day, int month, int year) {
    if (day < 0 || day > 31) {
        return false;
    }
    if (month < 0 || month > 12) {
        return false;
    }

    if (month == 2) {
        if (day > 29 && year % 4 == 0) {
            return false;
        }
        else if (day > 28) {
            return false;
        }
    }

    return true;
}

/// <summary>
/// 6. Program sprawdzaj¹cy czy podana data jest poprawna(np.sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
/// </summary>
void task6() {
    Utills::Console::PrintHeader("Sprawdzanie poprawnosci daty");

    int year = Utills::Console::GetIntFromUser("Podaj rok: ");
    int month = Utills::Console::GetIntFromUser("Podaj miesiac: ");
    int day = Utills::Console::GetIntFromUser("Podaj dzien: ");

    if (isDateValid(day, month, year)) {
        std::cout << "Data jest poprawna";
    }
    else {
        std::cout << "Data jest niepoprawna";
    }
}

/// <summary>
/// 7. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury(np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
/// </summary>
void task7() {
    int temperatureFromUser = Utills::Console::GetIntFromUser("Podaj temperature: ");

    if (temperatureFromUser > 20) {
        std::cout << "Cieplo";
    }
    else if (temperatureFromUser > 10) {
        std::cout << "Optymalnie";
    }
    else {
        std::cout << "Zimni";
    }
}

int main() {
    //task1();
    //std::cout << std::endl;
    //system("pause");
    //system("cls");

    //task2();
    //std::cout << std::endl;
    //system("pause");
    //system("cls");

    //task3();
    //std::cout << std::endl;
    //system("pause");
    //system("cls");

    //task4();
    //std::cout << std::endl;
    //system("pause");
    //system("cls");

    //task5();
    //std::cout << std::endl;
    //system("pause");
    //system("cls");

    task6();
    std::cout << std::endl;
    system("pause");
    system("cls");

    //task7();
    //std::cout << std::endl;
    //system("pause");
    //system("cls");
}