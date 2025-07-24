#include "main.h"

/**
 * _print_ascii - Prints a string with non-printable characters in hex format.
 * @args: va_list containing the string to print.
 *
 * Return: Number of characters printed.
 */

int _print_ascii(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;
	char hex_digits[] = "0123456789ABCDEF";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			/* Print first hexa number */
			/* ">> 4" is the same as "/ 16" */
			_putchar(hex_digits[(unsigned char)str[i] >> 4]);
			/* Then the second */
			_putchar(hex_digits[(unsigned char)str[i] % 16]);
			count += 4;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
