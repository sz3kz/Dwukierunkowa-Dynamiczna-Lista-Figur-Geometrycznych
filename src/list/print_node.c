#include "../../include/list.h"

void print_node(Node * node, bool is_current){
	if (is_current){
		printf(	" * Shape:\n"
			"	Name: \"%s\"\n"
			"	Area: %lf\n"
			"	Perimeter: %lf\n",
			node->data->name,
			node->data->area,
			node->data->perimeter);
	}
	else {
		printf(	"   Shape:\n"
			"	Name: \"%s\"\n"
			"	Area: %lf\n"
			"	Perimeter: %lf\n",
			node->data->name,
			node->data->area,
			node->data->perimeter);
	}
}
