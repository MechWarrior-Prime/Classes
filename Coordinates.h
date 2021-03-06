#pragma once
#include <string>
using namespace std;

class Coordinate {
public: // all following attributes until the next keyword are public
	double x; //attribute (member variable)
	double y;
	Coordinate();
	Coordinate(double x, double y);
	string toString(Coordinate a);
	string toString();
};

Coordinate CreateCoordinate(double x, double y);

class Coordinate3D : Coordinate { //inherits
public:
	double z = 0.0;
	Coordinate3D();
	Coordinate3D(double x, double y, double z);
};
