#include "../../include/doubly-linked-list.h"

void link_node(Node * current_node, Node * additional){
	current_node->next_node = additional;
	additional->previous_node = current_node;
}
