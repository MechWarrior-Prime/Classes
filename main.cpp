#include <iostream>
#include <vector> // C++ standard library for lists

#include "Coordinates.h"
#include "Customer.h"
#include "Cola Vending Machine.h"
#include "Vehicles.h"
#include "vectors.h"

#include "..\common\technolib.h"

using namespace std;

//Wenzel: Customer and Vehicles each contain some solutions of the Übungen
int main() {
	cout << "Classes 27-JAN-2020 to 31-JAN-2020, Uebung 10 & 11" << endl;

	/*
	Coordinates
	*/

	Coordinate p1;
	p1.x = 1.1;
	p1.y = 2.2;

	Coordinate p2 = CreateCoordinate(3.3, 4.4);

	Coordinate p3 = { 5.5, -3.2 }; // definitely shortest :)

	Coordinate3D p4 = Coordinate3D(1, 2, 3);

	vectortest();
	//return 1;

	/*
	Customers
	*/

	Customer Harry = { "Rindfleisch", "Harry", 51,gender::m };
	Customer Susi;
	Susi.age = 22;
	Susi.name = "Sorglos";
	Susi.surname = "Susi";
	Susi.sex = gender::f;

	cout << "Look! " << Susi.toString() << endl << endl;;

	Customer Me = Me.CreateCustomerByInput();

	Vehicle MyCar = { 100,60,10.8f };
	//	printf("You have arrived at the gas station, %s.", (string)Me.getSurname());
	cout << "You have arrived at the gas station, " << Me.getSurname();
	printf(". Your car has a fuel capacity of %d. How many liters do you want to put in?", MyCar.getTankSize());
	float liters = 0.0;
	cin >> liters;
	float dispensed = MyCar.fillErUp(liters);
	printf("You have to pay for %.2f liters.\n", dispensed);

	CVM Automat;
	float money = 0.0;
	cout << "Now let's get a Coke." << endl;
	cout << "Coke 1.10 is per can. Insert coins: ";
	cin >> money;
	Automat.insert_coins(money);

	cout << "How far do you want to drive?";
	float km = 0.0;
	cin >> km;
	MyCar.drive(km);
	if (MyCar.getFuelLeft() <= 0) {
		cout << "Too bad, you're outta gas." << endl;
	}
	else {
		cout << "You have arrived." << endl;
	}

	string line = FillString('=', 10);
	cout << endl << line << endl;
	printf("\nWell, what do you think of it so far? ");
	cin.ignore();
	getline(cin, line);
	cout << "You said: " << line << endl;

	system("pause"); //Windows command line
	return 0;
}