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
Zdefiniuj klase opisuj¹ce konto bankowe. Mo¿liwoœci klasy:
* konstruktory
* metoda która dokona wp³aty na konto
* metoda która wyp³aty z konta
* metoda która wykona przelew na inne konto
* metodê która poka¿e informacje o koncie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.
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
