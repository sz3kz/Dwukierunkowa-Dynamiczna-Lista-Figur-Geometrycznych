#include "../../include/interractive.h"

void newline2null(char * string){
	for (int i = 0; i < NAME_SIZE && string[i] != 0 ; ++i){
		if (string[i] == '\n'){
			string[i] = 0;
			break;
		}
	}
}
