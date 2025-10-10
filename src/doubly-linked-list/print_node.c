#include "../../include/doubly-linked-list.h"

void print_node(Node * node, bool is_current){
	if (is_current){
		printf(" * [%p]:{prev:%14p, next:%14p, data:%d}\n",
			node,
			node->prev,
			node->next,
			node->data);
	}
	else {
	printf("   [%p]:{prev:%14p, next:%14p, data:%d}\n",
			node,
			node->prev,
			node->next,
			node->data);
	}
}
