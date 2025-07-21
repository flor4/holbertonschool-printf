#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_integer(va_list args);

#endif
