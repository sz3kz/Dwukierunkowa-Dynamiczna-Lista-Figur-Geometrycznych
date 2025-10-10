#include "../../include/doubly-linked-list.h"

void print_node(Node * current){
	printf("[%p]:{prev:%p, next:%p, data:%d}\n",
			current,
			current->previous_node,
			current->next_node,
			current->dummy_data);
}
