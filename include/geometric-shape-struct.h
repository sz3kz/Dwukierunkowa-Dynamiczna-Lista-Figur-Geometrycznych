#ifndef GEOMETRIC_SHAPE_STRUCT_H
#define GEOMETRIC_SHAPE_STRUCT_H

#include <stdlib.h>

typedef struct GeometricShape {
	char * name;
	double area;
	double perimeter;
} GeometricShape;
GeometricShape * create_geometric_shape(char * name, double area, double perimeter);

#endif
