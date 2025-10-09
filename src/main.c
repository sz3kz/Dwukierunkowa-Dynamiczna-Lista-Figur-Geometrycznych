#include "../include/main.h"
#include "../include/doubly-linked-list.h"

int main(void){
	Node * head = create_node(90);
	Node * next = create_node(100);
	link_node(head, next);
	Node * last = find_last_node(head);
	printf("Last value: %d\n", last->dummy_data);
	Node * first = find_first_node(last);
	printf("First value: %d\n", first->dummy_data);
	delete_node(head);
	delete_node(next);
	return 0;
}
