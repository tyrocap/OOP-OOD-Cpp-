
#include "../headers/Circle.h"

Circle::Circle() {
	radius = 0;
}

Circle::Circle(float r) {
	radius = r;
}

float Circle::getArea() {
	return 3.142 * radius * radius;
}

float Circle::perimeter() {
	return 2 * 3.142 * radius;
}

