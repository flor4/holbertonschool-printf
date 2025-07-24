#include "main.h"

/**
 * _print_octal - Prints an octal number from decimal to stdout.
 * @args: va_list containing the number to print.
 *
 * Return: Number of characters printed.
 */

int _print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int octalNum[11]; /* Array to store octal number */
	int i = 0, count = 0;

	if (num == 0) /* Manage explicitly if number = 0 */
		return (_putchar('0'));

	for (; num > 0; i++)
	{ /* Convert from decimal to octal */
		octalNum[i] = num % 8;
		num = num / 8;
	}

	for (i = i - 1; i >= 0; i--)
	{ /* print from right to left */
		_putchar(octalNum[i] + '0');
		count++;
	}

	return (count);
}
