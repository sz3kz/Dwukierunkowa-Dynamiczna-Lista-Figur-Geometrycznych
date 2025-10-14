#include "../../include/doubly-linked-list.h"
#include "../../include/shape.h"

void delete_node(Node * current, Node ** current_ptr){
	Node * prev = current->prev;
	Node * next = current->next;
	if (prev != NULL){
		prev->next = next;
	}
	if (next != NULL){
		next->prev = prev;
	}
	delete_geometric_shape(current->data);
	free(current);
	*(current_ptr) = NULL;
}
