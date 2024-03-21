#include "main.h"
/**
 * printf_int - prints a int
 * @num: int
 * Return: length of int
 */
int printf_int(int num)
{
	char pnum[10];
	int i;
	int count = 0;
	int nega = 0;

	if (num < 0)
	{
		write (1, "-", 1);
		nega++;
		num = (-1) * num;
	}
	for (i = 9; num != 0; i--)
	{
		pnum[i] = '0' + (num % 10);
		num = num / 10;
	}
		i++;
		count = 10 - i;
		write (1, &pnum[i], count);
		return (nega + count);
}
