#include "../include/main.h"
#include "../include/doubly-linked-list.h"

int main(void){
	Node * node1 = create_node(1);

	append_element(node1, 2);
	append_element(node1, 3);
	append_element(node1, 4);

	print_list(node1);
	delete_list(node1);

	return 0;
}
