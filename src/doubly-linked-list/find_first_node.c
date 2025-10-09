#include "../../include/doubly-linked-list.h"

Node * find_first_node(Node * current_node){
	// the node need not be the head of the list, if the list is proper
	while (current_node->previous_node != NULL) current_node = current_node->previous_node;
	return current_node;
}
