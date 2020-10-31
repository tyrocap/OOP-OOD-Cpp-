#pragma once
#include "Shape.h"

class Circle: public Shape{
private:

	float radius;

public:

	Circle();
	Circle(float r);
	float getArea();
	float perimeter();
};
