#include "../../include/doubly-linked-list.h"

void print_list(Node * current_node){
	current_node = find_first_node(current_node);
	int counter = 0;
	while (current_node->next_node != NULL){
		printf("%d\n",current_node->dummy_data);
		counter ++;
		current_node = current_node->next_node;
	}
	printf("%d\n", current_node->dummy_data);
}
