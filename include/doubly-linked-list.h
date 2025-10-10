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
void delete_node(Node * current);
void print_node(Node * current);

void append_node(Node * current, Node * new);
void prepend_node(Node * current, Node * new);

void delete_list(Node * current);

Node * find_last_node(Node * current_node);
Node * find_first_node(Node * current_node);
void print_list(Node * current);
void append_element(Node * current_node, int dummy_data);

#endif
