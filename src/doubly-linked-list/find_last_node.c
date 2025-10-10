#include "../../include/doubly-linked-list.h"

Node * find_last_node(Node * current){
	// the node need not be the head of the list, if the list is proper
	while (current->next != NULL) current = current->next;
	return current;
}
