#include "main.h"

/**
 * _print_integer - Prints an integer to stdout.
 * @args: va_list containing the integer to print.
 *
 * Return: Number of characters printed.
 */

int _print_integer(va_list args)
{
	long int n = va_arg(args, int);
	int count = 0;
	unsigned long int num, temp_num, div = 1;

	if (n == 0) /* Handle zero explicitly */
	{
		_putchar('0');
		return (1);
	}

	if (n < 0) /* Handle negative numbers */
	{
		count += _putchar('-');
		num = -n;
	}
	else
		num = n;

	temp_num = num;

	/* Find the highest power of 10 */
	/* (if number = 123 then we get 100) */
	while (temp_num / div >= 10)
		div *= 10;

	/* Print each digit from left to right */
	while (div > 0)
	{
		/* Extract the current digit and convert it to a character */
		/* If number = 123 and div = 100 then 123 / 100 = 1 */
		count += _putchar((num / div) + '0');
		/* Remove the printed digit from the number */
		/* If number = 123 and div = 100 then 123 % 100 = 23 */
		num %= div;
		/* Move to the next lower digit */
		/* If div = 100 then div / 10 = 10 */
		div /= 10;
	}
	return (count);
}
