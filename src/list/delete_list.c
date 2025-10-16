#include "../../include/list.h"

void delete_list(Node * current){
	/* Navigates to the first node via the current node and 
	 * subsequently deletes every in the list.
	 * NOTE: when given a null pointer, the function just exits.*/
	if (current == NULL)
		return;
	current = find_first_node(current);
	while (current->next != NULL){
		current= current->next;
		delete_node(current->prev);
		current->prev = NULL;
	}
	delete_node(current);
}
