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
	int i = 0, j = 0, count = 0;

	if (format == NULL) /* Check for NULL format string */
		return (-1);
	va_start(args, format);
	while (format[i]) /* Loop through each character in the format string */
	{ /* Handle format specifiers */
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			for (j = 0; format_types[j].type; j++)
			{
				if (format[i + 1] == format_types[j].type)
				{
					if (format[i + 1] == '%')
						count += _putchar('%');
					else /* cf format_types.c file */
						count += format_types[j].func(args);
					break;
				}
			}
			if (format_types[j].type == '\0')
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
	_putchar(-1);
	va_end(args);
	return (count);
}
