#include "../../include/shape.h"

Shape * create_shape(char * name, double area, double perimeter){
	Shape * shape = malloc(sizeof(Shape));
	shape->name = name;
	shape->area = area;
	shape->perimeter = perimeter;
	return shape;
}
