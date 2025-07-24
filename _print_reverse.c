#include "main.h"

/**
 * _print_reverse - Prints a string in reverse to stdout.
 * @args: va_list containing the string to print.
 *
 * Return: Number of characters printed.
 */

int _print_reverse(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	if (!str)
		str = "(null)";

	/* Get string length */
	for (i = 0; str[i]; i++)
		;

	/* Print in reverse */
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}
