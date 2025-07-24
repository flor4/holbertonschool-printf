#include "main.h"

/**
 * get_format_types - Get array of format specifiers and handlers
 *
 * Description: Returns an array that contains pairs of format specifiers and
 * their corresponding handler functions.
 * Each entry maps a character (like 'c', 's', 'd')
 * to a function that handles printing for that specific format.
 *
 * Return: Array of format_specifier structures
 */
format_specifier_t *get_format_types(void)
{
	static format_specifier_t format_types[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'d', _print_integer},
		{'i', _print_integer},
		{'u', _print_unsigned},
		{'o', _print_octal},
		{'x', _print_lower_hexa},
		{'X', _print_upper_hexa},
		{'b', _print_binary},
		{'S', _print_ascii},
		{'p', _print_memory},
		{'r', _print_reverse},
		{'R', _print_rot13},
		{'%', NULL},
		{'\0', NULL}
	};

	return (format_types);
}
