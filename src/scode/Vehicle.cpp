#include "../headers/Vehicle.h"
#include <iostream>

void Vehicle::print_details() {
	std::cout << "Manufacturer: " << Make << std::endl;
	std::cout << "Color: " << Color << std::endl;
	std::cout << "Year: " << Year << std::endl;
	std::cout << "Model: " << Model << std::endl;
}

Vehicle::Vehicle ()
{
	Make = "";
	Color = "";
	Year = 0;
	Model = "";
}

Vehicle::Vehicle(std::string mk, std::string col, int yr, std::string ml) {
	Make = mk;
	Color = col;
	Year = yr;
	Model = ml;
}

