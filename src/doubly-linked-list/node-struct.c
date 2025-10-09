#include "../../includes/doubly-linked-list.h"

struct Node {
	Node * previous_node;
	Node * next_node;
	int dummy_data;
} Node;

typedef struct Node Node;
