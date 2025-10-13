#include "../include/main.h"
#include "../include/doubly-linked-list.h"
#include "../include/geometric-shape-struct.h"
#include "../include/interractive.h"

int main(void){
	system("clear");
	show_options_usage();
	char option = get_option();
	system("clear");
	printf("Selected option: %c\n",option);
	return 0;
}
