#include "main.h"

/**
 * _print_char - manage character print
 * 
 * @args: char to print
 * 
 * Return: 1
 */

int _print_char(va_list args)
{
	int ch = va_arg(args, int);

	write(1, &ch, 1);

	return (1);
}