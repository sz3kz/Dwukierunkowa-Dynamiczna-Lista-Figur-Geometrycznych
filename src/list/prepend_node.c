#include "../../include/list.h"

void prepend_node(Node * current, Node * new){
	/* Links a new node with the current node (as the previous). If a 
	 * node already preceeds the current node, link the node to point 
	 * to the new node as the next node.*/
	Node * previous = current->prev;
	if (previous != NULL) previous->next = new;

	current->prev = new;

	new->prev = previous;
	new->next = current;
}
