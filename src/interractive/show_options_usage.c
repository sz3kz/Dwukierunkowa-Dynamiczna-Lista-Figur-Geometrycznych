#include "../../include/interractive.h"	

void show_options_usage(void){
	printf("Options:\n");
	for (int iterator = 0; VALID_OPTIONS[iterator] != 0; ++iterator){
		char current_option = VALID_OPTIONS[iterator];
		switch(current_option){
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
				printf("Option: \"%c\" has no implementation!\n",current_option);
				break;
		}
	}
}
