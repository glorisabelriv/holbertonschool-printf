#include <string.h>
#include "main.h"
/**
 * printf_str - string
 * @s: parameter
 * Return: length of string
 */
int printf_str(char *s)
{
	int len;

	if (s != NULL)
	{
		len = _strlen(s);
		write(1, s, len);
		return (len);
	}
	else if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
		return (0);
}
