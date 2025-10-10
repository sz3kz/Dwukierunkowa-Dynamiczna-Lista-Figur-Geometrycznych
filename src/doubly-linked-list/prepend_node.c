
#include "../../include/doubly-linked-list.h"

void prepend_node(Node * current_node, Node * additional){
	Node * previous_node = current_node->previous_node;
	if (previous_node != NULL) previous_node->next_node = additional;

	current_node->previous_node = additional;

	additional->previous_node = previous_node;
	additional->next_node = current_node;
}
