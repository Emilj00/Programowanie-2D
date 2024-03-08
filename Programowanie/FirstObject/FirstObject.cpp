#include <iostream>
#include "Point3D.h"
#include <vector>

struct point {
    double x;
    double y;
    double z;
};

double distanceFromCenter(point p) {
    double distance = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
    return distance;
}

/*
ZADANIE
Zdefiniuj klase opisuj�ce konto bankowe. Mo�liwo�ci klasy:
* konstruktory
* metoda kt�ra dokona wp�aty na konto
* metoda kt�ra wyp�aty z konta
* metoda kt�ra wykona przelew na inne konto
* metod� kt�ra poka�e informacje o koncie.

Napisz program kt�ry zaprezentuje mo�liwo�ci obiektu na podstawie tej klasy.
*/

int main()
{
    point myPoint;
    
    myPoint.x = 2;
    myPoint.y = 6;
    myPoint.z = 5;
    
    std::cout << "dystans od srodka wynosi " << distanceFromCenter(myPoint);

    Point3D classPoint(2, 6, 5);
    std::cout << "dystans od srodka wynosi" << classPoint.DistanceFromCenter();

    if (classPoint == Point3D::Zero()) {
        std::cout << "Twoj punkt to (0, 0, 0)";
    } else {
        std::cout << "Twoj punkt to nie jest (0, 0, 0)";
    }
}
