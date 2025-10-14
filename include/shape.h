#ifndef SHAPE_H
#define SHAPE_H

#include <stdlib.h>

typedef struct GeometricShape {
	char * name;
	double area;
	double perimeter;
} GeometricShape;
GeometricShape * create_geometric_shape(char * name, double area, double perimeter);
void delete_geometric_shape(GeometricShape * shape);

#endif
