#include "../../include/doubly-linked-list.h"

Node * find_last_node(Node * current_node){
	// the node need not be the head of the list, if the list is proper
	while (current_node->next_node != NULL) current_node = current_node->next_node;
	return current_node;
}
