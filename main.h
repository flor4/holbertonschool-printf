#ifndef MAIN_H
#define MAIN_H

/* Include standard headers for required functions and types */
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/* Function prototypes for custom printf and helpers */
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_integer(va_list args);

#endif
