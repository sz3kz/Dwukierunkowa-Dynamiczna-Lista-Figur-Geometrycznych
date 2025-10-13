#include "../../include/geometric-shape-struct.h"
#include "../../include/interractive.h"

double get_geometric_shape_area(void){
	double area;
	while (1){
		printf("Area");
		printf("%s", INPUT_PROMPT);
		scanf("%lf", &area);
		if (area > 0) break;
		printf("Area must be a positive double value!\n");
	}
	return area;
}

double get_geometric_shape_perimeter(void){
	double perimeter;
	while (1){
		printf("Perimeter");
		printf("%s", INPUT_PROMPT);
		scanf("%lf", &perimeter);
		if (perimeter> 0) break;
		printf("Perimeter must be a positive double value!\n");
	}
	return perimeter;
}

