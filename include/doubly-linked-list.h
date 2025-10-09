#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <stdlib.h>

typedef struct Node {
	struct Node * previous_node;
	struct Node * next_node;
	int dummy_data;
} Node;

Node * create_node(int dummy_data);
void delete_node(Node * node);

#endif
