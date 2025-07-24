#include "main.h"

/**
 * _print_rot13 - Print a string encoded in ROT13.
 * @args: va_list containing the string to print.
 *
 * Return: Number of characters printed.
 */
int _print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;
	char ch, base;

	while ((ch = *str++))
	{
		/* Check if character is a letter (uppercase or lowercase) */
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			/* Set base to 'a' for lowercase, 'A' for uppercase */
			if (ch >= 'a')
				base = 'a';
			else
				base = 'A';

			/* ROT13 calculation: */
			/* 1. (ch - base): Convert letter to 0-25 range */
			/* 2. + 13: Shift 13 positions forward */
			/* 3. % 26: If > 25, wrap around to stay in 0-25 range */
			/* 4. + base: Convert back to ASCII value */
			count += _putchar(base + ((ch - base + 13) % 26));
		}
		else
			count += _putchar(ch);
	}
	return (count);
}
