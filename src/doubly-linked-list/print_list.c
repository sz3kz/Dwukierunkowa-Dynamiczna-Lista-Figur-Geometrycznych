#include "../../include/doubly-linked-list.h"

void print_list(Node * current){
	current = find_first_node(current);
	while (current->next_node != NULL){
		print_node(current);
		current = current->next_node;
	}
	print_node(current);
}
