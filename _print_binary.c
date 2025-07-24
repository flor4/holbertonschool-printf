#include "main.h"

/**
 * _print_binary - Prints a binary number from decimal to stdout.
 * @args: va_list containing the number to print.
 *
 * Return: Number of characters printed.
 */

int _print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int binaryNum[32]; /* Array to store binary number */
	int i = 0, count = 0;

	if (num == 0) /* Manage explicitly if number = 0*/
		return (_putchar('0'));

	for (; num > 0; i++)
	{ /* Convert from decimal to binary */
		binaryNum[i] = num % 2;
		num = num / 2;
	}

	for (i = i - 1; i >= 0; i--)
	{ /* print from right to left */
		_putchar(binaryNum[i] + '0');
		count++;
	}

	return (count);
}
