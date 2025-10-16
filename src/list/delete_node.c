#include "../../include/list.h"
#include "../../include/shape.h"

void delete_node(Node * current){
	/* Frees memory containing the structure the pointer is pointing to.
	 * Links adjacent nodes to the current node.
	 * NOTE: After this function is called with a node pointer, the pointer
	 * should NOT be used without reassignment first. Expect bugs from code
	 * not adhering to this warning.*/
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
