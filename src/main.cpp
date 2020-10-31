
#include <iostream>
#include "headers/Shape.h"
#include "headers/Rectangle.h"
#include "headers/Circle.h"

using namespace std;

int main() {

	Rectangle rect(2, 6);
	Shape* shape = &rect;

	cout << "Calling Rectangle getArea function: " << rect.getArea() << endl;      // Calls Rectangle.printArea()
	cout << "Calling Rectangle from shape pointer: " << shape->getArea() << endl << endl; // Calls shape's dynamic-type's
	
	Circle circle(5);
	shape = &circle;

	cout << "Calling Circle getArea function: " << circle.getArea() << endl;
	cout << "Calling Circle from shape pointer: " << shape->getArea() << endl << endl;
	return 0;
}




// FUNCTIONS

// pass-by-value: a copy of each argument is made and used in the scope of the function

// void multiplyBy5(int num) {
//	return num * 5;
// }
// pass-by-reference: passing the address of a variable as an argument instead of the variable itself

//void multiplyBy10(int& num) {
//	return num *= 10;
//}

// overloading: making a function perform different operations based on the nature of its arguments (provide different definitions)
// useful for speed, memory and readability (allows polymorphism)

//double product(double x, double y) {
//	return x * y;
//}

// Overloading the function to handle three arguments
//double product(double x, double y, double z) {
//	return x * y * z;
//}

// Overloading the function to handle floats
//float product(float x, float y) {
//	return x * y;
//}


// POINTERS

// Do keep in mind that the pointer itself is stored in the stack, 
// but can point to objects in both the stack (static memory) and heap (dynamic memory);
// 'new' creates an block of memory in heap if it is used with a pointer.
// e.g. int *p = new int(10);

// Passing pointers to functions resembles having global variables (remember passing references)
// since functions can now directly manupulate values stored in pointer addresses

// Syntax			Purpose
// int* p			Declares a pointer p
// p = new int	 	Creates an integer variable in dynamic memory and places its address in p
// p = new int(5)	Creates an integer object in dynamic memory with the value of 5
// p = new int[5]	Creates a dynamic array of size 5 and places the address of its first index in p
// p = &var			Points p to the var variable
// * p				Accesses the value of the object p points to
// * p = 8			Updates the value of the object p points to
// p				Accesses the memory address of the object p points to



// CLASSES

// access modifiers: private, public, protected (primarily used in 
	// implementation of 'inheritance')
// constructors: default, parameterized

// friend function: an independent function which has access to the variables 
	// and methods of its befriended class
// class instances must be passed by reference to this function; otherwise 
	// (think about it), values are destroyed 
// when the function goes out of score (and nothing is altered). 


// Data hiding: Encapsulation & Abstraction

// Inheritance (see classes Cars & Ships)
// Modes of inheritance: public, private, and protected
	// private: By using private inheritance, the private data members and member
	// functions of the base class are inaccessible in the derived class and in 
	// main. Protected and Public members of the base class are accessible to 
	// the derived class but not in main



// OBJECT-ORIENTED DESIGN
// Relationship between classes: part-of and has-a
// Composition: Car class (Door, Tire, etc are part-of 'Car'); In this case,
	// car class is responsible for the lifetime of other class objects
// Aggregation: Person class (Country is part of 'Person'); In this case, 
	// the relationship is loose, that is, if one is deleted, the other can
	// still be used
// Assosiation: Relationship between unrelated classes. Lifetime of any does 
	// not depend on each other. 
















