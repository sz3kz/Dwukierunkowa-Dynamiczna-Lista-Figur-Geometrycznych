#include "../../include/doubly-linked-list.h"

void append_node(Node * current_node, Node * additional){
	Node * next_node = current_node->next_node;
	if (next_node != NULL) next_node->previous_node = additional;

	current_node->next_node = additional;

	additional->next_node = next_node;
	additional->previous_node = current_node;
}
