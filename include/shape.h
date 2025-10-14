#ifndef SHAPE_H
#define SHAPE_H

#include <stdlib.h>

typedef struct GeometricShape {
	char * name;
	double area;
	double perimeter;
} Shape;
Shape * create_shape(double perimeter, double area, char * name);
void delete_shape(Shape * shape);

#endif
