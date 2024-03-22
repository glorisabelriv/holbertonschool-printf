#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * struct specifier - Structure of a format
 * @c: Format specifier of the type of data
 * @spec: Function pointer to corresponding function processing the data.
**/

 typedef struct specifier
{
	char c;
	int (*spec)(va_list);
} spec_t;

int _putchar(char c);
int spec_char(va_list args);
int spec_str(va_list args);
int spec_percent(va_list args);
int spec_deci(va_list args);
int _printf(const char *format, ...);
int print_num(va_list args);

#endif
