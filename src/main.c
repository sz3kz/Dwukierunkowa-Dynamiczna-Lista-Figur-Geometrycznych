#include "../include/main.h"
#include "../include/doubly-linked-list.h"
#include "../include/geometric-shape-struct.h"

int main(void){
	GeometricShape * shape = malloc(sizeof(GeometricShape));
	shape->name = "Kwadrat";
	shape->area = 20;
	shape->perimeter= 40;
	printf("Shape\'s name: %s\n",shape->name);
	printf("Shape\'s area: %lf\n",shape->area);
	printf("Shape\'s perimeter: %lf\n",shape->perimeter);

	return 0;
}
