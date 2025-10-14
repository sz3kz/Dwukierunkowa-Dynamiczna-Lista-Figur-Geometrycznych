#include "../../include/list.h"

Node * find_first_node(Node * current){
	// the node need not be the head of the list, if the list is proper
	while (current->prev != NULL) current = current->prev;
	return current;
}
