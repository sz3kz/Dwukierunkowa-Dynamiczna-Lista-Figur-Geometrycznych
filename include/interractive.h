#ifndef INTERRACTIVE_H
#define INTERRACTIVE_H

#include <stdio.h>
#include <stdbool.h>

#include "./shape.h"

#define VALID_OPTIONS "apdnbx"
#define INPUT_PROMPT ": "
#define INVALID_OPTION_MESSAGE "Sorry, option is invalid!\n"
#define NAME_MAXSIZE 15

char get_option(void);
void show_options_usage(void);
char * get_name(void);
double get_area(void);
double get_perimeter(void);
void newline2null(char * string);

#endif
