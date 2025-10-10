#include "../include/main.h"
#include "../include/doubly-linked-list.h"

int main(void){
	Node * head = create_node(2);
	Node * node1 = create_node(1);
	Node * node2 = create_node(3);
	prepend_node(head, node1);
	append_node(head, node2);
	//prepend_node(head, create_node(3));
	//prepend_node(head, create_node(4));

	print_list(head);
	delete_list(head);

	return 0;
}
