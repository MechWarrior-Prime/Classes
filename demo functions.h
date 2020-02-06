#pragma once
#include <string>
#include "Coordinates.h"

using namespace std;

class functions {
public:
	int AddIt(int a, int b) { return a + b; };	//declaration and definition in one swoop
	double AddIt(double a, double b);			//declared here, implemented in .cpp file
	double AddIt(int a, double b);				//overload
	string AddIt(string a, string b);			//anything goes
//	Coordinate AddIt(Coordinate a, Coordinate b);	// even with custom types
};
Coordinate operator+(Coordinate a, Coordinate b);
