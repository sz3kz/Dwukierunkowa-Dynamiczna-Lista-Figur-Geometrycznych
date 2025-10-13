#include "../../include/interractive.h"

void newline2null(char * string){
	for (int iterator = 0; string[iterator] != 0; ++iterator){
		if (string[iterator] == '\n'){
			string[iterator] = 0;
			break;
		}
	}
}
