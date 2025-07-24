#include "main.h"


/**
 * _print_reverse - Prints a string in reverse to stdout.
 * @args: va_list containing the character to print.
 *
 * Return: Number of characters printed.
 */

int _print_reverse(va_list args)
{
	char *str = va_arg(args, char *);
	int len, i, count = 0;

	len = strlen(str);
	for (i = len - 1 ; i >= 0 ; i--)
	{
		_putchar(str[i]);
		count--;
	}

	return (count);
}
