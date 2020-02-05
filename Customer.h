#pragma once
#include <iostream>
#include <string>

using namespace std;

enum class gender {
	m,
	f
};

class Person {
public:
	string name;
	string surname;
	Person();
	Person(string name, string surname);
};

Person::Person() {
	this->name = "Name";
	this->name = "No";
}

Person::Person(string name, string surname) {
	this->name = name;
	this->name = surname;
}

class Customer : public Person {
public:
	//string name;
	//string surname;
	unsigned age;
	gender sex;

	Customer();

	string toString() {
		return surname + " " + name + ", " + getSexString(sex) + ", age " + to_string(age);
	}

	Customer CreateCustomerByInput() { // ask the user for data
		Customer lCustomer;
		string lsInput;
		int liInput;
		char lcInput;

		cout << "What is your family name? ";
		cin >> lsInput;
		lCustomer.name = lsInput;
		cout << "What are you called? ";
		cin >> lsInput;
		lCustomer.surname = lsInput;
		cout << "How old are you? ";
		cin >> liInput;
		lCustomer.age = liInput;
		cout << "What is your gender (m/f)? ";
		cin >> lcInput;
		if (lcInput != 'm') {
			lCustomer.sex = gender::m;
		}
		else {
			lCustomer.sex = gender::f;
		}

		return lCustomer;
	}
private:
	string getSexString(gender s) {
		if (s == gender::m) {
			return "male";
		}
		return "female";
	}
public:

	//void showAllVAlues();// in Customer.cpp
	string getName() const { return name; }
	void setName(string name) { this->name = name; }

	string getSurname() const { return surname; }
	void setSurname(string surname) { this->surname = surname; }

	unsigned getAge() const { return age; }

	gender getSex() const { return sex; }
	void setSex(gender sex) { this->sex = sex; }
	Customer(string name, string surname, int age, gender sex);
};

Customer::Customer() {
	name = "Doe";
	surname = "Joe";
	age = 0;
	sex = gender::m;
};

Customer::Customer(string name, string surname, int age, gender sex) {
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->sex = sex;
}

class Vendor : public Person {
public:

	Vendor(string name, string surname, string ID);
private:
	string sID = "";

public:
	string getSID() const { return sID; }
};

Vendor::Vendor(string name, string surname, string ID) {
	this->name = name;
	this->surname = surname;
	this->sID = ID;
}