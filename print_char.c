#include "main.h"

/**
 * print_character - Prints a single character to the standard output.
 * @args: The character to be printed.
 * Return: 1, indicating that only one character was printed.
 */

int print_character(va_list args)
{
        char character = (char) va_arg(args, int);

        _putchar(character);
        return (1);
}
