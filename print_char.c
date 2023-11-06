#include "main.h"
#include <stdio.h>
/**
 * print_char -- prints a char, subfunction of printf
 * @format: the format specifier
 * @arg: va_list containing the arguments
 * Return: 1
 */

int print_char(const char *format, va_list arg)
{
	char c = va_arg(arg, int);
	/**
	 * char is self promoting variable (promotes to int), which means that in
	 * va_list it is stored as an int so we need to retrieve the next arg that
	 * is an int
	 */

	if (*format != 0)
	{
		_putchar(c);
		return (1); /* returns amount of bytes printed */
	}
	else
	{
		return (0);
	}
}
