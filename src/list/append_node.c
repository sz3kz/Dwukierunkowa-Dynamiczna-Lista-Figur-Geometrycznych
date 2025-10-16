#include "../../include/list.h"

void append_node(Node * current, Node * new){
	/* Links a new node with the current node (as the next). If a node 
	 * already succeeds the current node, link the node to point to the 
	 * new node as the previous node.*/
	Node * next = current->next;
	if ( next != NULL) next->prev = new;

	current->next = new;

	new->next = next;
	new->prev = current;
}
