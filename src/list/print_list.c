#include "../../include/list.h"

void print_list(Node * current){
	/* Navigates to the first node and subsequently prints
	 * every node.
	 * NOTE: if the pointer given is NULL, the function is able
	 * to detect it and print accordingly.*/
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
