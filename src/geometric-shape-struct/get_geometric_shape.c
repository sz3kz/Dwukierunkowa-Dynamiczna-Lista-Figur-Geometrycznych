#include "../../include/geometric-shape-struct.h"
#include "../../include/interractive.h"

char * get_geometric_shape_name(void){
	char * name = malloc(sizeof(char) * NAME_MAXSIZE);
	printf("Name");
	printf("%s", INPUT_PROMPT);
	fgets(name, NAME_MAXSIZE, stdin);
	return name;
}
double get_geometric_shape_area(void){
	double area;
	printf("Area");
	printf("%s", INPUT_PROMPT);
	scanf("%lf", &area);
	return area;
}

double get_geometric_shape_perimeter(void){
	double perimeter;
	printf("Perimeter");
	printf("%s", INPUT_PROMPT);
	scanf("%lf", &perimeter);
	return perimeter;
}

