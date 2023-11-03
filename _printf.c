#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _printf - prints stuff
 * @format: format specifier and/or string to be printed
 * @...: variable amount of variables to be printed
 * Return: amount of bytes printed
 */
int _printf(const char *format, ...)
{
	int (*op)(const char *format, va_list arg);
	int result;

	va_list(arg);
	result = 0;
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
				result += op(format, arg);
			}
		}
		else
		{
			_putchar(*format);
			result++;
		}
		format++;
	}
	_putchar('\n');
	va_end(arg);
	return (result);
}
