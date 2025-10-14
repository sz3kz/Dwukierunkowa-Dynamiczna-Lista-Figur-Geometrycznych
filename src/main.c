#include "../include/main.h"
#include "../include/list.h"
#include "../include/shape.h"
#include "../include/interractive.h"

int main(void){
	Node * current = NULL;
	Node * tmp;
	char option;
	Shape * shape;
	while (1){
		system("clear");
		print_list(current);
		show_options_usage();

		option = get_option();
		system("clear");

		switch(option){
			case 'a':
				puts("You chose to append a new node.");
				shape = create_shape(
						get_perimeter(),
						get_area(),
						get_name());
				if (current == NULL) current = create_node(shape);
				else append_node(current, create_node(shape));
				break;
			case 'p':
				puts("You chose to prepend a new node.");
				shape = create_shape(
						get_perimeter(),
						get_area(),
						get_name());
				if (current == NULL) current = create_node(shape);
				else prepend_node(current, create_node(shape));
				break;
			case 'd':
				puts("You chose to delete the current node.");
				tmp = NULL;
				if (current->next != NULL){
					tmp = current->next;
				}
				else {
					if (current->prev != NULL){
						tmp = current->prev;
					}
				}

				delete_node(current, &current);
				current = tmp;

				break;
			case 'n':
				puts("You chose to select the next node.");
				if (current->next != NULL) current = current->next;
				else puts("There exists no next node.");
				break;
			case 'b':
				puts("You chose to select the node before.");
				if (current->prev != NULL) current = current->prev;
				else puts("There exists no node before this one.");
				break;
			case 'x':
				puts("You chose to exit the program.");
				delete_list(current);
				return 0;
			default:
				puts("Option error.");
				return 0;
		}
	}
	return 0;
}
