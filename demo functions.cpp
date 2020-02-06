#include "demo functions.h"
#include <string>

using namespace std;

double functions::AddIt(double a, double b)
{
	return a + b;
}

double functions::AddIt(int a, double b)
{
	return a + b;
}

Coordinate operator+(Coordinate a, Coordinate b)
{
	Coordinate r;
	r.x = a.x + b.x;
	r.y = a.y + b.y;
	return r;
}

//Coordinate AddIt(Coordinate a, Coordinate b)
//{
//	Coordinate r;
//	r.x = a.x + b.x;
//	r.y = a.y + b.y;
//	return r;
//}