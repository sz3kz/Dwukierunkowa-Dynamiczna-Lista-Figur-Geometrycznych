#include "../../include/list.h"

Node * create_node(Shape * data){
	Node * ptr = malloc(sizeof(Node));
	ptr->prev = NULL;
	ptr->next = NULL;
	ptr->data = data;
	return ptr;
}
