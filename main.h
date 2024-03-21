#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _strlen(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(char c);
int printf_str(char *s);
int printf_int(int num);
int printf_default(char c);
#endif
