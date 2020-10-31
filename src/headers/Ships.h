#pragma once
#include <string>

class Ships: Vehicle {
    int Number_of_Anchors;

public:

    Ships();

    Ships(std::string mk, std::string col, int yr, std::string mdl, int na);

    void ships_details();
};
