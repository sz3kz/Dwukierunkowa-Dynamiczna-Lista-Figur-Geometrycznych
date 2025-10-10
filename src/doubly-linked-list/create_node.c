#include "../../include/doubly-linked-list.h"

Node * create_node(int data){
	Node * ptr = malloc(sizeof(Node));
	ptr->prev = NULL;
	ptr->next = NULL;
	ptr->data = data;
	return ptr;
}
