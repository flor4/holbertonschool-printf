#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Our version of printf.
 * @format: Format string containing the text to print.
 *
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	if (!format) /* Check for NULL format string */
		return (-1);

	va_start(args, format);

	/* Loop through each character in the format string */
	for (i = 0; format[i]; i++)
	{ /* Handle format specifiers */
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				count += _print_char(args);
			else if (format[i] == 's')
				count += _print_string(args);
			else if (format[i] == 'd' || format[i] == 'i')
				count += _print_integer(args);
			else if (format[i] == '%')
			{ /* Print a single '%' */
				_putchar('%');
				count += 1;
			}
			else
			{ /* Print unknown specifier as is */
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{ /* Print regular character */
			_putchar(format[i]);
			count += 1;
		}
	}
	va_end(args);
	return (count);
}
