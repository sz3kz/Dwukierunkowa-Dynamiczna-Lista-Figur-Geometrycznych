#include "../../include/doubly-linked-list.h"

Node * find_first_node(Node * current){
	// the node need not be the head of the list, if the list is proper
	while (current->previous_node != NULL) current = current->previous_node;
	return current;
}
