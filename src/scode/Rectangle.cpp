#include "../headers/Rectangle.h"

Rectangle::Rectangle() {
	width = 0;
	height = 0; 
};

Rectangle::Rectangle(float width, float height) {
	this->width = width;
	this->height = height;
};

float Rectangle::getArea() {
	return width * height;
};
