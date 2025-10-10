#include "../../include/doubly-linked-list.h"

void delete_node(Node * current, Node ** current_ptr){
	free(current);
	*(current_ptr) = NULL;
}
