#include "../../include/doubly-linked-list.h"

Node * create_node(int dummy_data){
	Node * ptr = malloc(sizeof(Node));
	ptr->dummy_data = dummy_data;
	return ptr;
}
