#include "../include/main.h"
#include "../include/doubly-linked-list.h"

int main(void){
	Node * current = create_node(0);
	prepend_node(current, create_node(1));
	prepend_node(current, create_node(2));
	prepend_node(current, create_node(3));
	append_node(current, create_node(10));
	append_node(current, create_node(11));
	append_node(current, create_node(12));

	print_list(current);
	delete_list(current);

	return 0;
}
