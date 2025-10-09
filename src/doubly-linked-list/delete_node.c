#include "../../include/doubly-linked-list.h"

void delete_node(Node * node){
	free(node);
}
