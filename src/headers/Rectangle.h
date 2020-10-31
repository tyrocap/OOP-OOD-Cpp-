#pragma once
#include "Shape.h"


class Rectangle: public Shape {

private:

	float width;
	float height;

public:
	Rectangle();

	Rectangle(float width, float height);

	float getArea();
};
