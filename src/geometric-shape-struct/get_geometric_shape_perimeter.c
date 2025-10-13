#include "../../include/interractive.h"

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

