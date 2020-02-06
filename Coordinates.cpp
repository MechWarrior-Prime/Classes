#include "Coordinates.h" // use .cpp if you use the class in multiple files, else the linker fails

Coordinate::Coordinate() {
	x = 0.0;
	y = 0.0;
}// standard constructor

Coordinate::Coordinate(double x, double y) {
	this->x = x;
	this->y = y;
}

Coordinate3D::Coordinate3D() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
}// standard constructor

Coordinate3D::Coordinate3D(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Coordinate CreateCoordinate(double x, double y) {
	Coordinate c;
	c.x = x;
	c.y = y;
	return c;
}