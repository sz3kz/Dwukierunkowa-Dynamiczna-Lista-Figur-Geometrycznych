#include "../include/main.h"
#include "../include/doubly-linked-list.h"
#include "../include/geometric-shape-struct.h"
#include "../include/interractive.h"

int main(void){
	show_options_usage();
	char option = get_option();
	printf("Selected option: %c\n",option);
	return 0;
}
