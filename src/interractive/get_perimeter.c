#include "../../include/interractive.h"

double get_perimeter(void){
	double perimeter;
	while (1){
		printf("Perimeter");
		printf("%s", INPUT_PROMPT);
		scanf("%lf", &perimeter);
		if (perimeter> 0) break;
		printf("Perimeter must be a positive double value!\n");
	}
	// WHEN PERIMETER IS THE LAST DATA SEGMENT FOR SHAPE
	// THIS ENSURES THE OPTION GIVEN BY THE USER
	// IS NOT NEWLINE!
	while( getchar() != '\n' && getchar() != EOF);
	return perimeter;
}

