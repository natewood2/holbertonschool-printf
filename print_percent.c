#include "main.h"
#include <stdarg.h>
/**
 * print_percent -- subfunction of _printf; prints a percent sign
 * @format: the format specifier
 * @arg: variable list of arguments passed
 *
 * Return: number of bytes printed to the terminal
 */
int print_percent(const char *format, va_list arg)
{
	if (*format != 0)
	{
		_putchar(37);
		return (1);
	}
	else
	{
		return (0);
	}
}
