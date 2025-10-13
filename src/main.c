#include "../include/main.h"
#include "../include/doubly-linked-list.h"
#include "../include/geometric-shape-struct.h"
#include "../include/interractive.h"

int main(void){
	printf("Pick option:\n");
	printf("	\"a\" - create new node and (a)ppend it to the current node.\n");
	printf("	\"p\" - create new node and (p)repend it to the current node.\n");
	printf("	\"d\" - (d)elete current node.\n");
	printf("	\"n\" - select (n)ext node.\n");
	printf("	\"b\" - select the node (b)efore.\n");
	printf("	\"x\" - quit the program.\n");
	char option = get_option();
	printf("Selected option: %c\n",option);
	return 0;
}
