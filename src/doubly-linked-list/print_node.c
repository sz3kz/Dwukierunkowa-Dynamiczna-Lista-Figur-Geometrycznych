#include "../../include/doubly-linked-list.h"

void print_node(Node * current){
	printf("[%p]:{prev:%p, next:%p, data:%d}\n",
			current,
			current->prev,
			current->next,
			current->data);
}
