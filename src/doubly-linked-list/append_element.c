#include "../../include/doubly-linked-list.h"

void append_element(Node * current_node, int dummy_data){
	current_node = find_last_node(current_node);
	Node * addition = create_node(dummy_data);
	append_node(current_node, addition);
}
