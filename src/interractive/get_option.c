#include "../../include/interractive.h"	

char get_option(void){
	bool is_valid = 0;
	char option = 0;
	while (1){
		printf("%s", INPUT_PROMPT);
		option = getchar();
		for (int iterator = 0; VALID_OPTIONS[iterator] != 0; ++iterator){
			if (option == VALID_OPTIONS[iterator]){
				is_valid = 1;
				break;
			}
		}
		if (is_valid) break;
		else printf("%s", INVALID_OPTION_MESSAGE);
	}
	return option;
}
