#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * _print_string - Prints a string to stdout.
 * @args: va_list containing the string to print.
 *
 * Return: Number of characters printed.
 */

int _print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	/* Handle NULL string */
	if (!str)
		str = "(null)";

	/* Print each character and count them */
	while (*str)
		count += _putchar(*str++);

	return (count);
}
