#include "../../include/list.h"
#include "../../include/shape.h"

void delete_node(Node * current){
	// Warning: this function deletes the structure to the pointer,
	// Dereferencing the pointer will cause undefined behavior.
	Node * prev = current->prev;
	Node * next = current->next;
	if (prev != NULL){
		prev->next = next;
	}
	if (next != NULL){
		next->prev = prev;
	}
	delete_shape(current->data);
	free(current);
}
