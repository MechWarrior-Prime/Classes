#pragma once
#include <iostream>

using namespace std;

// Übung 10, 28-JAN-2020

class CVM {
public:
	const unsigned MAXCANS = 100;
	unsigned cans_remaining = MAXCANS;
	const float PRICE = 1.1f; //in €

	// returns amount of cans after filling
	unsigned fill(unsigned cans) {
		cans_remaining = cans;
		if (cans > MAXCANS) cans = MAXCANS;
		return cans;
	}

	float insert_coins(float amount) {
		if (cans_remaining == 0) {
			cout << "ERROR: no cans available" << endl;
			return amount;
		}

		float refund = amount - PRICE;

		if (refund >= 0) {
			cans_remaining--;
			printf("Refreshment dispensed. %.2f refunded\n", refund);
			return refund;
		}
		else {
			cout << "Insufficient funds. Add " << PRICE - amount << endl;
			return 0;
		}
	}
};