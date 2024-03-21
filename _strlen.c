#include "main.h"
/**
 * _strlen - len of a string
 * @s: stirng
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
