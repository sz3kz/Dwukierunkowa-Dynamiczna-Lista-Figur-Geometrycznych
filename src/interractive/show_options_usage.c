#include "../../include/interractive.h"	

void show_options_usage(void){
	/* Loops through characters of VALID_OPTIONS and outputs it accordingly.
	 * Can detect errors, won't help diagnosing them at the execution level.*/
	char option;
	printf("Options:\n");
	for (int i = 0; VALID_OPTIONS[i] != 0; ++i){
		option = VALID_OPTIONS[i];
		switch(option){
			case 'a':
				printf("	\"a\" - create new node and (a)ppend it to the current node.\n");
				break;
			case 'p':
				printf("	\"p\" - create new node and (p)repend it to the current node.\n");
				break;
			case 'd':
				printf("	\"d\" - (d)elete current node.\n");
				break;
			case 'n':
				printf("	\"n\" - select (n)ext node.\n");
				break;
			case 'b':
				printf("	\"b\" - select the node (b)efore.\n");
				break;
			case 'x':
				printf("	\"x\" - quit the program.\n");
				break;
			default:
				printf("Option: \"%c\" has no implementation!\n",option);
				break;
		}
	}
}
