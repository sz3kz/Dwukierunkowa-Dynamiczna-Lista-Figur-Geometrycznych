#include "../../include/doubly-linked-list.h"

void delete_list(Node * current){
	current = find_first_node(current);
	while (current->next != NULL){
		current= current->next;
		delete_node(current->prev);
		current->prev = NULL;
	}
	delete_node(current);
}
