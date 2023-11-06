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
		_putchar(37); /* Ascii value for % */
		return (1); /* returns bytes printed */
	}
	else
	{
		va_arg(arg, char *); /* removing unused variable error */
		return (0);
	}
}
