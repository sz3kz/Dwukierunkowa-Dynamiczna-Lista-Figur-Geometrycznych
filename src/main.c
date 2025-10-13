#include "../include/main.h"
#include "../include/doubly-linked-list.h"
#include "../include/geometric-shape-struct.h"

int main(void){
	Node * kwadrat = create_node("Kwadrat", 20, 10);
	print_list(kwadrat);
	delete_list(kwadrat);
	return 0;
}
