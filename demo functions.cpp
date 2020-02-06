#include "demo functions.h"
#include <string>

using namespace std;

double AddIt(double a, double b)
{
	return a + b;
}

double AddIt(int a, double b)
{
	return a + b;
}

string functions::AddIt(string a, string b)
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