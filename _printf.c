#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _printf - prints stuff
 * @format: format specifier and/or string to be printed
 * @arg: variable amount of variables to be printed
 * Return: nothing is void
 */
void _printf(const char *format, ...)
{
	int (*op)(const char *format, va_list arg);
	va_list(arg);
	va_start(arg, format);
	if (format == NULL)
	{
		exit(98);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			op = get_funct(format);
			if (op != NULL)
			{
				op(format, arg);
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	_putchar('\n');
	va_end(arg);
}
