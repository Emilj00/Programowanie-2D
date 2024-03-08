#include "Point3D.h"
#include <corecrt_math.h>

double Point3D::Distance(const Point3D pointOne, const Point3D pointTwo)
{
	double distance = sqrt(pointOne.x * pointTwo.x + pointOne.y * pointTwo.y + pointOne.z * pointTwo.z);
	return distance;
}

Point3D::Point3D()
{
	x = 0;
	y = 0;
	z = 0;
}

Point3D::Point3D(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

double Point3D::DistanceFromCenter()
{
	return Distance(*this, Zero());
}

double Point3D::DistanceTo(Point3D point3d)
{
	return Distance(*this, point3d);
}

double Point3D::GetX()
{
	return x;
}

double Point3D::GetY()
{
	return y;
}

double Point3D::GetZ()
{
	return z;
}

bool Point3D::operator==(const Point3D point) const
{
	return this->x == point.x && this->y == point.y && this->z == point.z;
}

Point3D Point3D::Zero()
{
	return Point3D();
}
