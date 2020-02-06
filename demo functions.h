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

//templates DO NOT have to be put into a .cpp file,unlike normal functions
template<typename Datatype> // Datatype is a programmer chosen name
//template<class T> // alternate syntax, T is also programmers chosen name, but a convention
Datatype AddAnyType(Datatype a, Datatype b) {
	return a + b;
}
