#include "../include/main.h"
#include "../include/doubly-linked-list.h"
#include "../include/geometric-shape-struct.h"
#include "../include/interractive.h"

int main(void){
	Node * current = NULL;
	char option;
	while (1){
		system("clear");
		print_list(current);
		show_options_usage();

		option = get_option();
		system("clear");

		switch(option){
			case 'a':
				puts("You chose to append a new node.");
				char * name = get_name();
				double area = get_area();
				double perimeter = get_perimeter();
				GeometricShape * shape = create_geometric_shape(name,area,perimeter);
				if (current == NULL) current = create_node(shape);
				else append_node(current, create_node(shape));
				break;
			case 'p':
				puts("You chose to prepend a new node.");
				break;
			case 'd':
				puts("You chose to delete the current node.");
				break;
			case 'n':
				puts("You chose to select the next node.");
				break;
			case 'b':
				puts("You chose to select the node before.");
				break;
			case 'x':
				puts("You chose to exit the program.");
				return 0;
			default:
				puts("Option error.");
				return 0;
		}

		printf("Press any key to continue...");
		while (getchar() != '\n');
	}
	return 0;
}
