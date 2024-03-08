class Point3D {
	double x, y, z;

	double static Distance(Point3D pointOne, Point3D pointTwo);

public:
	Point3D();
	Point3D(double x, double y, double z);

	double DistanceFromCenter();
	double DistanceTo(Point3D point3d);
	
	double GetX();
	double GetY();
	double GetZ();

	bool operator==(const Point3D point) const;

	static Point3D Zero();
};