#include "../../include/doubly-linked-list.h"

Node * create_node(char * name, double area, double perimeter){
	Node * ptr = malloc(sizeof(Node));
	ptr->prev = NULL;
	ptr->next = NULL;
	ptr->data.name = name;
	ptr->data.area = area;
	ptr->data.perimeter = perimeter;
	return ptr;
}
