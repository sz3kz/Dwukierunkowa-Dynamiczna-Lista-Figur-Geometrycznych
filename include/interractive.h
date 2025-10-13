#ifndef INTERRACTIVE_H
#define INTERRACTIVE_H

#include <stdio.h>
#include <stdbool.h>

#include "./geometric-shape-struct.h"

#define VALID_OPTIONS "apdnbx"
#define INPUT_PROMPT ": "
#define INVALID_OPTION_MESSAGE "Sorry, option is invalid!\n"
#define NAME_MAXSIZE 15

char get_option(void);
void show_options_usage(void);
GeometricShape * get_geometric_data(void);

#endif
