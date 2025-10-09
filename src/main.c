#include "../include/main.h"
#include "../include/doubly-linked-list.h"

int main(void){
	Node * head = create_node(90);
	printf("Value: %d\n",head->dummy_data);
	delete_node(head);
	return 0;
}
