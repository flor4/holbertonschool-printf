#ifndef MAIN_H
#define MAIN_H

/* Include standard headers for required functions and types */
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/* Function prototypes for custom printf and helpers */
int _putchar(char c);
int _printf(const char *format, ...);

/* Function prototypes for format specifiers */
int _print_char(va_list args);
int _print_string(va_list args);
int _print_integer(va_list args);
int _print_unsigned(va_list args);
int _print_octal(va_list args);
int _print_lower_hexa(va_list args);
int _print_upper_hexa(va_list args);
int _print_binary(va_list args);
int _print_ascii(va_list args);
int _print_memory(va_list args);

/**
 * struct format_specifier - Struct that links a format char to a print func.
 * @type: Format specifier character (e.g. 'c', 's', 'd', etc.)
 * @func: Pointer to function handling printing for this specifier
 *
 * This struct maps a format specifier to its corresponding print function.
 */
typedef struct format_specifier
{
	char type;
	int (*func)(va_list);
} format_specifier_t;

/* Global array of format specifiers and their handlers */
extern struct format_specifier format_types[];

#endif
