#include "../../include/shape.h"

void delete_shape(Shape * shape){
	free(shape->name);
	free(shape);
}
