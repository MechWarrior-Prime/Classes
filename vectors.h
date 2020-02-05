#pragma once

#include <iostream>
#include <vector>

#include "Coordinates.h" //my own

using namespace std;

void vectortest() {
	cout << endl << "//// Welcome to the vector test ////" << endl << endl;
	vector<int> lviNumbers;// the heap is managed by the vector class. Nice!

	 // elements count
	cout << "elements count " << lviNumbers.size() << endl;

	lviNumbers.push_back(42); // add an element to the end of the vector
	cout << "elements count " << lviNumbers.size() << endl;

	lviNumbers.push_back(2);
	lviNumbers.push_back(500);
	lviNumbers[2] = 900;

	cout << "3rd element: " << lviNumbers[2] << endl;

	cout << "all out" << endl;
	for (unsigned i = 0; i < lviNumbers.size(); i++) {
		cout << i << ": " << lviNumbers[i] << endl;
	}
	cout << "last element: " << lviNumbers.back() << endl;

	vector<Coordinate> lvCoordinates; //powerful!
	Coordinate p1 = CreateCoordinate(4.5, 5.6);
	lvCoordinates.push_back(p1);
	lvCoordinates.push_back({ 1.1,2.2 });
	cout << "1st coordinate: " << lvCoordinates[0].x << ", " << lvCoordinates[0].y << endl;
	cout << "last coordinate: " << lvCoordinates.back().x << ", " << lvCoordinates.back().y << endl;

	cout << endl << "//// vector test complete ////" << endl << endl;
}
