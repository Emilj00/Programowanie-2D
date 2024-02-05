#include "Point.h"
#include <corecrt_math.h>

Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

double Point::distanceFromCenter()
{
	double distance = sqrt(x * x + y * y + z * z);
	return distance;
}

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

double Point::getZ()
{
	return z;
}
