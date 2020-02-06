#include "Coordinates.h" // use .cpp if you use the class in multiple files, else the linker fails
#include <string>

using namespace std;

Coordinate::Coordinate() {
	x = 0.0;
	y = 0.0;
}// standard constructor

Coordinate::Coordinate(double x, double y) {
	this->x = x;
	this->y = y;
}

string Coordinate::toString(Coordinate a)
{
	char       buf[80];
	sprintf_s(buf, sizeof(buf), "X=%f, y=%f", a.x, a.y);
	return buf;
}
string Coordinate::toString()
{
	char       buf[80];
	sprintf_s(buf, sizeof(buf), "X=%f, y=%f", this->x, this->y);
	return buf;
}

//string toStringCo(Coordinate a)
//{
//	char       buf[80];
//	sprintf_s(buf, sizeof(buf), "X=%f, y=%f", a.x, a.y);
//	return buf;
//}

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