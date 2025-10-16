#include "../../include/interractive.h"

double get_perimeter(void){
	/* Prompts the user for a "perimeter" positive double value, returns it.
	 * Will loop prompting until the value inputted is positive. */
	double perimeter;
	while (1){
		printf("Perimeter");
		printf("%s", INPUT_PROMPT);
		scanf("%lf", &perimeter);
		if (perimeter > 0) break;
		printf("Perimeter must be a positive double value!\n");
	}
	return perimeter;
}

