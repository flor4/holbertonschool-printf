#include "main.h"

/**
 * _printf - Our version of printf.
 * @format: Format string containing the text to print.
 *
 * Return: Number of characters printed or -1 on error.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, j = 0, count = 0;
	format_specifier_t *format_types;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '\0')
		return (0);
	format_types = get_format_types();
	va_start(args, format);
	for (i = 0; format[i]; i++) /* Loop through each char in the format string */
	{ /* Handle format specifiers */
		if (format[i] == '%')
		{
			if (format[++i] == '%')
			{ /* Handle % at end of string */
				count += _putchar('%');
				continue;
			}
			for (j = 0; format_types[j].type != '\0'; j++)
			{
				if (format[i] == format_types[j].type)
				{
					count += format_types[j].func(args);
					break;
				}
			}
			if (format_types[j].type == '\0')
			{ /* Print unknown specifier as is */
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else /* Print regular character */
			count += _putchar(format[i]);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
