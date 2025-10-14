#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "./shape.h"

typedef struct Node {
	struct Node * prev;
	struct Node * next;
	Shape * data;
} Node;

Node * create_node(Shape * data);
void delete_node(Node * current, Node ** current_ptr);
void print_node(Node * node, bool is_current);

void append_node(Node * current, Node * new);
void prepend_node(Node * current, Node * new);

Node * find_first_node(Node * current);

void delete_list(Node * current);
void print_list(Node * current);

#endif
