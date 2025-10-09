#include "../include/main.h"
#include "../include/doubly-linked-list.h"

int main(void){
	Node * head = create_node(90);
	Node * next = create_node(100);
	link_node(head, next);
	printf("First value: %d\n",head->dummy_data);
	printf("Second value: %d\n",head->next_node->dummy_data);
	delete_node(head);
	delete_node(next);
	return 0;
}
