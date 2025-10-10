#include "../../include/doubly-linked-list.h"

Node * find_last_node(Node * current){
	// the node need not be the head of the list, if the list is proper
	while (current->next_node != NULL) current = current->next_node;
	return current;
}
