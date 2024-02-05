#include <iostream>
#include "Point.h"

struct point {
    double x;
    double y;
    double z;
};

double distanceFromCenter(point p) {
    double distance = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
    return distance;
}

int main()
{
    point myPoint;
    
    myPoint.x = 2;
    myPoint.y = 6;
    myPoint.z = 5;
    
    std::cout << "dystans od srodka wynosi " << distanceFromCenter(myPoint);

    Point classPoint(2, 6, 5);
    std::cout << "dystans od srodka wynosi" << classPoint.distanceFromCenter();
}
