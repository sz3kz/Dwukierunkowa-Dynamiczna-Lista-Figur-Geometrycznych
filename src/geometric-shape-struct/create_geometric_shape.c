#include "../../include/geometric-shape-struct.h"

GeometricShape * create_geometric_shape(char * name, double area, double perimeter){
	GeometricShape * shape = malloc(sizeof(GeometricShape));
	shape->name = name;
	shape->area = area;
	shape->perimeter = perimeter;
	return shape;
}
