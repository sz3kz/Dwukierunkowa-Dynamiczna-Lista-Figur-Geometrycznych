#include "../../include/interractive.h"

char * get_name(void){
	/* Prompts the user for a string value of length NAME_SIZE.
	 * Nulls the newline character.*/
	char * name = malloc(sizeof(char) * NAME_SIZE);
	printf("Name");
	printf("%s", INPUT_PROMPT);
	fgets(name, NAME_SIZE, stdin);
	newline2null(name);
	return name;
}
