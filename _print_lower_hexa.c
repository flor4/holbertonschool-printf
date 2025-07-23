#include "main.h"

/**
 * _print_lower_hexa - Prints a lower hexa number from dec to stdout.
 * @args: va_list containing the number to print.
 *
 * Return: Number of characters printed.
 */
int _print_lower_hexa(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int hexaNum[8]; /* Array to store hexa number */
	int i = 0, count = 0;
	char *hexa_chars = "0123456789abcdef";

	if (num == 0) /* Manage explicitly if number = 0 */
		return (_putchar('0'));

	for (; num > 0; i++)
	{ /* Convert from decimal to hexadecimal */
		hexaNum[i] = num % 16;
		num = num / 16;
	}

	for (i = i - 1; i >= 0; i--)
	{ /* print from right to left */
		_putchar(hexa_chars[hexaNum[i]]);
		count++;
	}

	return (count);
}
