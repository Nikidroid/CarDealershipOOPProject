#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	string brand;
	string model;
	string body;
	int year;
	int price;


	// Default constructor
	Car() {
		brand = "Indefinited brand";
		model = "no name";
		body = "unknown";
		year = 0;
		price = 0;

	}

	// Canonical constructor with parameters (arguments)
	Car(string brnd, string mdl, string bd, int y, int p) {
		brand = brnd;
		model = mdl;
		body = bd;
		year = y;
		price = p;
	}

	// Destructor
	~Car() {
		
	}

	string convert() {
		string s = "";
		s += brand + " " + model;
		s += ": body = " + body;
		s += ", year of issue = " + to_string(year);
		s += ", price = " + to_string(price) + " dollars.\n";
		return s;
	}
};