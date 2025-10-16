#include "../../include/interractive.h"	

char get_option(void){
	/* Prompts the user for a "option" character, returns it.
	 * The charcode has to be found inside the VALID_OPTIONS string.
	 * Loops prompting untill it receives a valid character option.*/
	bool is_valid = 0;
	char option = 0;
	while (1){
		printf("%s", INPUT_PROMPT);
		option = getchar();
		while (getchar() != '\n');
		for (int iterator = 0; VALID_OPTIONS[iterator] != 0; ++iterator){
			if (option == VALID_OPTIONS[iterator]){
				is_valid = 1;
				break;
			}
		}
		if (is_valid) 
			break;
		else printf("%s", INVALID_OPTION_MESSAGE);
	}
	return option;
}
