#pragma once
#include <string>

class Vehicle {

protected:

	std::string Make;
	std::string Color;
	int Year;
	std::string Model;

public:

	Vehicle ();
	Vehicle(std::string mk, std::string col, int yr, std::string ml);

	void print_details();

};


