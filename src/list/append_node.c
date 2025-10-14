#include "../../include/list.h"

void append_node(Node * current, Node * new){
	Node * next = current->next;
	if ( next != NULL) next->prev = new;

	current->next = new;

	new->next = next;
	new->prev = current;
}
