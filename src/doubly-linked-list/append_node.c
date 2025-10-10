#include "../../include/doubly-linked-list.h"

void append_node(Node * current, Node * new){
	Node * next = current->next_node;
	if ( next != NULL) next->previous_node = new;

	current->next_node = new;

	new->next_node = next;
	new->previous_node = current;
}
