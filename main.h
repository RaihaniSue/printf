#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

typedef struct fmt
{
	char *ident;
	int (*f)();
} params;




/* task zero */
int print_char(va_list opaq);
int print_string(va_list opaq);
int print_percent(va_list opaq);
int _strlen(char *s);
