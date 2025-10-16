#include "../../include/list.h"

Node * find_first_node(Node * current){
	/* Recursively follows the current node's previous node,
	 * until there is no previous node (the current node is 
	 * first node), returns the current node.
	 * NOTE: the function does no error checking, expects the 
	 * list to be properly linked.*/
	while (current->prev != NULL) current = current->prev;
	return current;
}
