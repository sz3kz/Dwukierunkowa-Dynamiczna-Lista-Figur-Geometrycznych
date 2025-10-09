#include "../../include/doubly-linked-list.h"

Node * create_node(int dummy_data){
	Node * ptr = malloc(sizeof(Node));
	ptr->previous_node = NULL;
	ptr->next_node = NULL;
	ptr->dummy_data = dummy_data;
	return ptr;
}
