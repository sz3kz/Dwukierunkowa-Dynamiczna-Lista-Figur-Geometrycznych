#include "../../include/list.h"

void prepend_node(Node * current, Node * new){
	Node * previous = current->prev;
	if (previous != NULL) previous->next = new;

	current->prev = new;

	new->prev = previous;
	new->next = current;
}
