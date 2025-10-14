#include "../../include/shape.h"

void delete_geometric_shape(GeometricShape * shape){
	free(shape->name);
	free(shape);
}
