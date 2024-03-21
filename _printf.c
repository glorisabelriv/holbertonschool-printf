#include <string.h>
#include "main.h"
/**
 * _printf - formated output
 * @format: parameter
 * Return: number of chracter printed
 */
int _printf(const char *format,...)
{
	int i = 0;
    int count = 0;
    int spc = 0;
	va_list a;

	va_start(a, format);
	if (format != NULL)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				i++;
				while (format[i] == ' ')
				{
					i++;
					spc++;
				}
				switch (format[i])
				{
				case 'c':
				count += printf_char(va_arg(a, int));
				break;
				case 's':
				count += printf_str(va_arg(a, char *));
				break;
				case '%':
				write(1, &format[i], 1);
				count++;
				break;
				case 'i':
				count += printf_int(va_arg(a, int));
				break;
				case 'd':
				count += printf_int(va_arg(a, int));
				break;
				default:
				count += printf_default(format[i]);
				i++;
				break;
				}
			}
			else
			{
				write(1, &format[i], 1);
				count++;
			}
			i++;
		}
		va_end(a);
		return (count);
	}
	else
	va_end(a);
	return (-1);
}
