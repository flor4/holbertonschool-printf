#include "main.h"

/**
 * _print_memory - Prints the memory adress of a pointer.
 * @args: va_list containing the string to print.
 *
 * Return: Number of characters printed.
 */

int _print_memory(va_list args)
{
	char *str = va_arg(args, void *);
	unsigned long int adress = (unsigned long int)str;
	int i = 0, count = 0;
	char hex_digits[] = "0123456789ABCDEF";
	char buffer[17]; /* 16 for adress + \0 */

	if (str == NULL)
	{ /* If pointer is NULL */
		count += _printf("(nil)");
		return (count);
	}

	while (adress > 0)
	{ /* Convert adress into hexa format */
		buffer[i++] = hex_digits[adress % 16];
		adress /= 16;
	}

	_putchar('0');
	_putchar('x');
	count += 2;

	while (i--)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}
