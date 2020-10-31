#include "../headers/Vehicle.h"
#include "../headers/Cars.h"
#include <iostream>
using namespace std;


Cars::Cars() {
	trunk_size = "";
}

Cars::Cars(string mk, string col, int yr, string ml, string ts)
	: Vehicle (mk, col, yr, ml) { // note how base class contructor is used
	trunk_size = ts;
}

void Cars::car_details() {
	print_details(); // coming from base class
	cout << "Trunk size: " << trunk_size << endl;
}