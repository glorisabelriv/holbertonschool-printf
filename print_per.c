#include "main.h"

/**
 * print_percent - Prints a literal '%' character to the standard output.
 * @args: The argument list (unused in this function).
 * Return: 1, indicating that only one character was printed.
 */

int print_percent(va_list args)
{
        (void) args;

        _putchar('%');
        return (1);
}
