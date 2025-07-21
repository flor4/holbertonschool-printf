#include "main.h"

/**
 * _printf - display output according to a format.
 *
 * @format: character string.
 *
 * Return: number of character printed.
 *
 */

int _printf(const char *format, ...)
{
	int i;

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (i++ == 's')
			{
				write(1, &format[i], 1);
			}
			else if (i++ == 'c')
				write(1, &format[i], 1);
		}
	}
	return (0);
}
