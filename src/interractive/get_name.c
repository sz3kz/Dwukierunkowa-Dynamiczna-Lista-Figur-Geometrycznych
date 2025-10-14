#include "../../include/interractive.h"

char * get_name(void){
	char * name = malloc(sizeof(char) * NAME_SIZE);
	printf("Name");
	printf("%s", INPUT_PROMPT);
	fgets(name, NAME_SIZE, stdin);
	newline2null(name);
	return name;
}
