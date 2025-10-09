#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
	struct Node * previous_node;
	struct Node * next_node;
	int dummy_data;
} Node;

Node * create_node(int dummy_data);
void delete_node(Node * node);
void link_node(Node * current_node, Node * additional);
Node * find_last_node(Node * current_node);
Node * find_first_node(Node * current_node);
void append_node(Node * current_node, Node * additional);
void print_list(Node * current_node);
void delete_list(Node * current_node);
void append_element(Node * current_node, int dummy_data);

#endif
