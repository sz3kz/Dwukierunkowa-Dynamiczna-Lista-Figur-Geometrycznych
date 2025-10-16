#include "../../include/shape.h"

Shape * create_shape(double perimeter, double area, char * name){
	/* Allocates memory and initializes the Shape structure.
	 * NOTE: the order of arguments is specifically defined as
	 * such: this function is (originally) being called with
	 * interractive prompt function returns directly inputted
	 * as arguments to this function. The arguments are evaluated
	 * from the last to the first, therefore to have the "name"
	 * value be prompted to the user first, the "name" argument
	 * must be the last argument of the function. This makes a lot
	 * of sense if one is familiar with th order in which CPU registers
	 * are initialized before a "call" instruction in assembly
	 * (for e.g. via a reverse engineering hobby)*/
	Shape * shape = malloc(sizeof(Shape));
	shape->name = name;
	shape->area = area;
	shape->perimeter = perimeter;
	return shape;
}
