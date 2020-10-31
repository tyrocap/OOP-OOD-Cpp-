#include <iostream>
#include "../headers/Vehicle.h"
#include "../headers/Ships.h"

using namespace std;

Ships::Ships() {
	Number_of_Anchors = 0;
}

Ships::Ships(string mk, string col, int yr, string mdl, int na)
	: Vehicle(mk, col, yr, mdl) {
	Number_of_Anchors = na;
}

void Ships::ships_details() {
	print_details();
	cout << "Number of Anchors: " << Number_of_Anchors << endl;
}
