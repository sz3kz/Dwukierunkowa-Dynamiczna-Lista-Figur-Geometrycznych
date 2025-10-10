#include "../../include/doubly-linked-list.h"

void delete_list(Node * current){
	current = find_first_node(current);
	while (current->next_node != NULL){
		current= current->next_node;
		delete_node(current->previous_node);
		current->previous_node = NULL;
	}
	delete_node(current);
}
