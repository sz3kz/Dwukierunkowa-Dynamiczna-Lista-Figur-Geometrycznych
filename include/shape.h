#ifndef SHAPE_H
#define SHAPE_H

#include <stdlib.h>

typedef struct GeometricShape {
	char * name;
	double area;
	double perimeter;
} GeometricShape;
GeometricShape * create_shape(char * name, double area, double perimeter);
void delete_shape(GeometricShape * shape);

#endif
