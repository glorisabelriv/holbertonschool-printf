#include "main.h"
/**
 * printf_default - print % and pointer to char
 * c: char
 * Return: num of char
 */
int printf_default(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}
