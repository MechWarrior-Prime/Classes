#pragma once
#include <iostream>

using namespace std;

class Instrument {
public:
	virtual void playIt() { //this makes it DYNAMIC !
		cout << "playing instrument..." << endl;
	}
};

class Guitar : public Instrument {
public:
	void playIt() {
		cout << "playing guitar..." << endl;
	}
};

class Trumpet : public Instrument {
public:
	void playIt() {
		cout << "playing trumpet..." << endl;
	}
};