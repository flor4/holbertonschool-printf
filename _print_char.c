#include "main.h"

/**
 * _print_char - Prints a single character to stdout.
 * @args: va_list containing the character to print.
 *
 * Return: Number of characters printed (always 1).
 */

int _print_char(va_list args)
{
	int ch = va_arg(args, int);

	/* Print the character */
	_putchar(ch);

	return (1);
}
