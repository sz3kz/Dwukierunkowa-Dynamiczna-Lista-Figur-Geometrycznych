#include "../../include/doubly-linked-list.h"

void print_node(Node * node, bool is_current){
	if (is_current){
		printf(" * [%p]:\n\tName:%s, \n\tArea:%lf, \n\tPerimeter:%lf\n",
			node,
			node->data->name,
			node->data->area,
			node->data->perimeter);
	}
	else {
		printf("   [%p]:\n\tName:%s, \n\tArea:%lf, \n\tPerimeter:%lf\n",
			node,
			node->data->name,
			node->data->area,
			node->data->perimeter);
	}
}
