#include "../../include/doubly-linked-list.h"

void print_node(Node * node, bool is_current){
	if (is_current){
		printf(" * [%p]:{prev:%14p, next:%14p, name:%s, area:%lf, perimeter:%lf}\n",
			node,
			node->prev,
			node->next,
			node->data.name,
			node->data.area,
			node->data.perimeter);
	}
	else {
		printf("   [%p]:{prev:%14p, next:%14p, name:%s, area:%lf, perimeter:%lf}\n",
			node,
			node->prev,
			node->next,
			node->data.name,
			node->data.area,
			node->data.perimeter);
	}
}
