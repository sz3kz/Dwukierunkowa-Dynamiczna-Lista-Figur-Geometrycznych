#include "../../include/geometric-shape-struct.h"

void delete_geometric_shape(GeometricShape * shape){
	free(shape->name);
	free(shape);
}
