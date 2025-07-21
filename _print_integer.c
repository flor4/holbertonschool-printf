#include "main.h"

/**
 * _print_integer - manage integer to print
 * 
 * @args: integer to print
 * 
 * Return: 1
 */

int _print_integer(va_list args)
{
	int *number = va_arg(args, int *);

	if (!number)
		return (-1);

	while (*number)
	{
		write(1, number++, 1);
	}

	return (1);
}