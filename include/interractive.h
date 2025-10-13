#ifndef INTERRACTIVE_H
#define INTERRACTIVE_H

#include <stdio.h>
#include <stdbool.h>

#define VALID_OPTIONS "apdnbx"
#define INPUT_PROMPT ": "
#define INVALID_OPTION_MESSAGE "Sorry, option is invalid!\n"

char get_option(void);

#endif
