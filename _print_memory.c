#include "main.h"

/**
 * _print_memory - Prints the memory adress of a pointer.
 * @args: va_list containing the string to print.
 *
 * Return: Number of characters printed.
 */

 int _print_memory(va_list args)
 {
	 void *ptr = va_arg(args, void *);
	 unsigned long int address = (unsigned long int)ptr;
	 int i, count = 0, start = 0;
	 char hex_digits[] = "0123456789abcdef";
	 char buffer[17]; /* Max size: 16 for 64-bit address + \0 */
	 int digits = sizeof(void *) * 2; /* 8 for 32-bit, 16 for 64-bit */
 
	 if (ptr == NULL)
	 {
		 count += _printf("(nil)");
		 return (count);
	 }
 
	 /* Convert address to hex */
	 for (i = digits - 1; i >= 0; i--)
	 {
		 buffer[i] = hex_digits[address % 16];
		 address /= 16;
	 }
	 buffer[digits] = '\0';
 
	 /* Find first non-zero digit, keeping at least one digit */
	 while (start < digits - 1 && buffer[start] == '0')
		 start++;
 
	 _putchar('0');
	 _putchar('x');
	 count += 2;
 
	 /* Print each character of the address, skipping leading zeros */
	 for (i = start; i < digits; i++)
	 {
		 _putchar(buffer[i]);
		 count++;
	 }
 
	 return (count);
 }