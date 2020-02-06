#pragma once
#include <ctime>
#include <iostream>

using namespace std;

// Übung 15
class MyDate
{
protected:
	unsigned int Day;
	unsigned int Month;
	int Year;
public:
	MyDate();
	MyDate(unsigned Day, unsigned Month, int Year);

	unsigned getDay() { return Day; }
	unsigned getMonth() { return Month; }
	unsigned getYear() { return Year; }

	// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
	const string currentDateTime() {
		time_t     now = time(0);  //seconds since midnight 1.1.1970
		char       buf[80];
		tm ltm;
		localtime_s(&ltm, &now);
		// Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
		// for more information about date/time format
		strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &ltm);

		return buf;
	}
};

class MyDateTime : public MyDate {
public:
	unsigned Minutes;
	unsigned Seconds;
	MyDateTime();
};
