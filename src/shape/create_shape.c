#include "../../include/shape.h"

GeometricShape * create_shape(char * name, double area, double perimeter){
	GeometricShape * shape = malloc(sizeof(GeometricShape));
	shape->name = name;
	shape->area = area;
	shape->perimeter = perimeter;
	return shape;
}
