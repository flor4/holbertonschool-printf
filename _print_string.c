#include "main.h"

/**
 * _print_string - manage string to print
 * 
 * @args: string to print
 * 
 * Return: 1
 */

int _print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	while (*str)
	{
		write(1, str++, 1);
	}

	return (1);
}