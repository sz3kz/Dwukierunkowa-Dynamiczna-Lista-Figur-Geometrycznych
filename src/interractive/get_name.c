#include "../../include/interractive.h"

char * get_name(void){
	char * name = malloc(sizeof(char) * NAME_MAXSIZE);
	printf("Name");
	printf("%s", INPUT_PROMPT);
	fgets(name, NAME_MAXSIZE, stdin);
	newline2null(name);
	return name;
}
