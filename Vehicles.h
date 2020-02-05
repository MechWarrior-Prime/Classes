#pragma once
// 29-JAN-2020

#include <windows.h>
#include <iostream>
#include <combaseapi.h>

using namespace std;

class Vehicle {
public:
	GUID getID(void);
	float getFuelLeft(void);
	float getConsumption(void);
	float fillErUp(float);
	unsigned getTankSize(void);//liters to put into tank
	void drive(float distance) {// in km
		fuel_left -= (distance * consumption) / 100;
		if (fuel_left < 0) fuel_left = 0;
		printf("You have %.3f liters left in the tank.\n", fuel_left);
	}
	Vehicle(); //default constructor;
	Vehicle(unsigned tanksize, float tank_content, float consumption);	// general constructor
private:
	unsigned tanksize;
	GUID ID;
	float fuel_left;
	float consumption; // l/km
};

Vehicle::Vehicle() {
	tanksize = 100;
	GUID ID = getID();
	fuel_left = 50.0f;
	consumption = 10.0f; // l/km
}
Vehicle::Vehicle(unsigned tanksize, float fuel, float consumption) {
	cout << "Vehicle is being created." << endl;
	HRESULT CoCreateGuid(GUID & ID); // CAUTION! COMPILE WITH x86 ONLY !!!
	GUID ID = getID();
	fuel_left = fuel;
	this->consumption = consumption;
	this->tanksize = tanksize;
}

GUID Vehicle::getID(void) {
	return ID;
}

float Vehicle::getFuelLeft(void) {
	return fuel_left;
}

float Vehicle::getConsumption(void) {
	return consumption;
}

float Vehicle::fillErUp(float liters) {// put fuel into the tank, return amount actually put in
	float total_fuel = fuel_left + liters;
	if (total_fuel >= tanksize) {
		float put_in = tanksize - fuel_left;
		fuel_left = (float)tanksize;
		return put_in;
	}
	fuel_left += liters;
	return liters;
}

unsigned Vehicle::getTankSize(void) {
	return tanksize;
}
