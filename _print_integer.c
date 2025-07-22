#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _print_integer - Prints an integer to stdout.
 * @args: va_list containing the integer to print.
 *
 * Return: Number of characters printed.
 */

int _print_integer(va_list args)
{
	int number = va_arg(args, int);
	int div = 1, count = 0;
	char c;

	if (number == 0) /* Handle zero explicitly */
	{
		_putchar('0');
		return (1);
	}

	if (number < 0) /* Handle negative numbers */
	{
		_putchar('-');
		number = -number;
		count += 1;
	}

	/* Find the highest power of 10 */
	/* (if number = 123 then we get 100) */
	while (number / div >= 10)
		div *= 10;

	/* Print each digit from left to right */
	while (div != 0)
	{
		/* Extract the current digit and convert it to a character */
		/* If number = 123 and div = 100 then 123 / 100 = 1 */
		c = (number / div) + '0';
		/* Print the digit */
		_putchar(c);
		/* Add 1 to the counter */
		count += 1;
		/* Remove the printed digit from the number */
		/* If number = 123 and div = 100 then 123 % 100 = 23 */
		number %= div;
		/* Move to the next lower digit */
		/* If div = 100 then div / 10 = 10 */
		div /= 10;
	}
	return (count);
}
