#include "../../include/doubly-linked-list.h"

void delete_list(Node * current_node){
	current_node = find_first_node(current_node);
	while (current_node->next_node != NULL){
		current_node = current_node->next_node;
		delete_node(current_node->previous_node);
		current_node->previous_node = NULL;
	}
	free(current_node);
}
