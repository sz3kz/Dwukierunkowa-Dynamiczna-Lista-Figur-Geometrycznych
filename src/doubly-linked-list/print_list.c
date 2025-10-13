#include "../../include/doubly-linked-list.h"

void print_list(Node * current){
	if (current == NULL){
		printf("[List has no nodes]\n");
		return;
	}
	Node * iterator = find_first_node(current);
	while (iterator->next != NULL){
		print_node(iterator, iterator == current);
		iterator = iterator->next;
	}
	print_node(iterator, iterator == current);
}
