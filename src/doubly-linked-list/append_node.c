#include "../../include/doubly-linked-list.h"

void append_node(Node * current_node, Node * additional){
	Node * last = find_last_node(current_node);
	last->next_node = additional;
	additional->previous_node = last;
}
