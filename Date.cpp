#include "Date.h"

// standard constructor
MyDate::MyDate(void) {
	time_t     now = time(0);  //seconds since midnight 1.1.1970
	char       buf[80];
	tm ltm;
	localtime_s(&ltm, &now);
	Day = ltm.tm_mday;
	Month = ltm.tm_mon + 1;// month array starts with index 0
	Year = ltm.tm_year + 1900;
}

MyDate::MyDate(unsigned Day, unsigned Month, int Year)
{
	this->Day = Day;
	this->Month = Month;
	this->Year = Year;
}

MyDateTime::MyDateTime(void)
	: MyDate() // use base class constructor
{
	time_t     now = time(0);  //seconds since midnight 1.1.1970
	char       buf[80];
	tm ltm;
	localtime_s(&ltm, &now);
	Seconds = ltm.tm_sec;
	Minutes = ltm.tm_min;
}