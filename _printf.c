#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - A simplified version of printf.
 * @format: Format string containing the text to print.
 *
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;

	if (!format)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
			{
				_print_char(args);
			}
			else if (format[i] == 's')
			{
				_print_string(args);
			}
			else if (format[i] == '%')
			{
				write(1, "%", 1);
			}
			else
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
	}

	va_end(args);
	return (0);
}
