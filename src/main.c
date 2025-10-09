#include "../include/main.h"
#include "../include/doubly-linked-list.h"

int main(void){
	Node * node1 = create_node(1);
	Node * node2 = create_node(2);
	Node * node3 = create_node(3);
	Node * node4 = create_node(4);

	append_node(node1, node2);
	append_node(node1, node3);
	append_node(node1, node4);

	print_list(node3);
	delete_list(node2);

	return 0;
}
