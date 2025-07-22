#include "main.h"

/**
 * _printf - Our version of printf.
 * @format: Format string containing the text to print.
 *
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL) /* Check for NULL format string */
		return (-1);

	va_start(args, format);

	while (format[i]) /* Loop through each character in the format string */
	{ /* Handle format specifiers */
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == 'c')
				count += _print_char(args);
			else if (format[i + 1] == 's')
				count += _print_string(args);
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				count += _print_integer(args);
			else if (format[i + 1] == '%')
				count += _putchar('%'); /* Print a single '%' */
			else
			{ /* Print unknown specifier as is */
				count += _putchar('%');
				count += _putchar(format[i + 1]);
			}
			i += 2;
		}
		else
		{ /* Print regular character */
			count += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
