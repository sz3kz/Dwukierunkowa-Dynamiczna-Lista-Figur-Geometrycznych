#include "../../include/interractive.h"

double get_area(void){
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
