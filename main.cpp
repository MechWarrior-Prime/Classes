#include <iostream>
#include <vector> // C++ standard library for lists

#include "Coordinates.h"
#include "Customer.h"
#include "Cola Vending Machine.h"
#include "Vehicles.h"
#include "vectors.h"
#include "Date.h"
#include "demo functions.h"
#include "instruments.h"

#include "..\common\technolib.h"

using namespace std;

//This program tries to show as much of the syntax and the concepts of c++ as possible
int main() {
	cout << "Classes 27-JAN-2020 to 07-FEB-2020, Uebung 10,11 and 15" << endl;

	setlocale(LC_ALL, "");// Windows setting for the umlauts

	/*
	Date
	*/

	MyDate d;
	cout << d.currentDateTime() << endl;
	cout << currentDECDate() << endl;
	cout << "Hit <Enter> to continue" << endl;
	(void)getchar(); // wait for input

	/*
	Coordinates
	*/

	Coordinate p1;
	p1.x = 1.1;
	p1.y = 2.2;

	Coordinate p2 = CreateCoordinate(3.3, 4.4); // p for 'point'

	Coordinate p3 = { 5.5, -3.2 }; // definitely shortest :)

	Coordinate3D p4 = Coordinate3D(1, 2, 3); // inherited class

	Coordinate p5 = p1 + p2; // overloaded operator, defined in "demo functions.h"

	cout << "Coordinate p5 reads as " << p5.toString() << endl;

	p5 = AddAnyType(p1, p2); // this works b/c we have defined a + operator
	cout << "Coordinate p5 reads as " << p5.toString() << endl;

	unsigned long long a = 1000000000; // let's try to add something exotic
	unsigned long long b = 2000000000;

	cout << "\nTesting template: " << AddAnyType(a, b) << endl;

	vectortest();
	cout << "Hit <Enter> to continue" << endl;
	(void)getchar(); // wait for input

	/*
	Persons
	*/

	Person George;
	George.name = "George";
	George.surname = "Götz";
	cout << "Here comes " << George.surname << endl;

	Male Bud;
	Bud.name = "Spencer";
	Bud.surname = "Bud";
	Bud.lengthOfBeard = 55;//mm
	Bud.printName();
	cout << endl;
	George = Bud; //works, bur loses the lengthOfBeard attribute
	George.printName();
	cout << endl << endl;

	/*
	pointers
	*/
	// address
	Male* pBud = &Bud;		//pointers point to an address
	(*pBud).printName();	//dereference first, so use ()
	pBud->printName();		// this is shorthand for the line above
	/*
	IMPORTANT NOTE: even with dynamic memory access like in the heap, static binding like above is upheld!
	*/

	cout << "\n\nHi dynamic binding!" << endl;
	Instrument instrument;
	instrument.playIt();
	Guitar guitar;
	guitar.playIt();
	Trumpet trumpet;
	trumpet.playIt();
	Instrument instrument2;
	instrument2 = trumpet; // incomplete copy
	Instrument* pInstrument;
	pInstrument = &guitar; // incomplete copy
	pInstrument->playIt(); // shows instrument when static, and guitar when virtual. virtual is a pointer to a pointer
	/* the above means that types cannot be changed! Well, unless you use virtual...
	 with this, you can create vectors with different types, thus:
	 vector<Instrument*> orchestra;
	 orchestra.push_Back(&guitar);
	 orchestra.push_Back(&trumpet);
	 this only works with pointers, ofc. Normal variables remain static and thus adhere strictly to their type.
	*/

	/*
	Customers
	*/

	Customer Harry = { "Hopper", "Harry", 51,gender::m };
	cout << endl << endl;
	Harry.printName();

	cout << " crosses the road." << endl;

	Customer Susi;
	Susi.age = static_cast<int>(22.2); //slower but cleaner than (int)
	Susi.name = "Sorglos";
	Susi.surname = "Susi";
	Susi.sex = gender::f;

	cout << "\n\nLook! " << Susi.toString() << endl << endl;;

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