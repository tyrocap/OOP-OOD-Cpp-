#pragma once
#include <string>

class Cars: public Vehicle {
	std::string trunk_size;

public:

	Cars();
	Cars(std::string mk, std::string col, int yr, std::string ml, std::string ts);

	void car_details();
};
