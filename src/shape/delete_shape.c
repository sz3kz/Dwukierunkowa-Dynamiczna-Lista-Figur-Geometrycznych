#include "../../include/shape.h"

void delete_shape(GeometricShape * shape){
	free(shape->name);
	free(shape);
}
