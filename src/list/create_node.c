#include "../../include/list.h"

Node * create_node(Shape * data){
	/* Allocate memory for the Shape struct, return the pointer to it. */
	Node * ptr = malloc(sizeof(Node));
	ptr->prev = NULL;
	ptr->next = NULL;
	ptr->data = data;
	return ptr;
}
