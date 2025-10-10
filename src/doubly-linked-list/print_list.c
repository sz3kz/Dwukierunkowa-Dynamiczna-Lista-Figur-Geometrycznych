#include "../../include/doubly-linked-list.h"

void print_list(Node * current_node){
	current_node = find_first_node(current_node);
	while (current_node->next_node != NULL){
		print_node(current_node);
		current_node = current_node->next_node;
	}
	print_node(current_node);
}
