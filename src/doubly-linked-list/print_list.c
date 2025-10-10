#include "../../include/doubly-linked-list.h"

void print_list(Node * current){
	if (current == NULL){
		printf("List does not exist - no elements found!\n");
		return;
	}
	current = find_first_node(current);
	while (current->next != NULL){
		print_node(current);
		current = current->next;
	}
	print_node(current);
}
