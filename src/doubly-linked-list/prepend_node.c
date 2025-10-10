#include "../../include/doubly-linked-list.h"

void prepend_node(Node * current, Node * new){
	Node * previous = current->previous_node;
	if (previous != NULL) previous->next_node = new;

	current->previous_node = new;

	new->previous_node = previous;
	new->next_node = current;
}
