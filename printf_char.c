#include "main.h"
/**
 * printf_char - prints a char
 * @c: char
 * Return: length of char or 0
 */
int printf_char(char c)
{
	if (c != '\0')
	{
		write(1, &c, 1);
		return (1);
	}
	else
	return (0);
}
