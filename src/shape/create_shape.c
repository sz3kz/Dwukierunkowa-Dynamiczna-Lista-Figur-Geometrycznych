#include "../../include/shape.h"

Shape * create_shape(double perimeter, double area, char * name){
	Shape * shape = malloc(sizeof(Shape));
	shape->name = name;
	shape->area = area;
	shape->perimeter = perimeter;
	return shape;
}
