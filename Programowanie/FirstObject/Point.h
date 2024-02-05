class Point {
	double x, y, z;

public:
	Point();
	Point(double x, double y, double z);

	double distanceFromCenter();

	double getX();
	double getY();
	double getZ();
};