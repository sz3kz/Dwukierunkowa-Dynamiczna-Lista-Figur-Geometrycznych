#include "../../include/doubly-linked-list.h"

void delete_list(Node * head){
	/* 
	Although i could use any node, i will explicitely handle the first node
	Adhering to the KISS principle.
	*/
	while (head->next_node != NULL){
		head= head->next_node;
		delete_node(head->previous_node);
		head->previous_node = NULL;
	}
	delete_node(head);
}
