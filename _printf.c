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
	int (*op)(const char *format, va_list arg); /* same type as *f in struct */
	int result; /* holds amount of bytes printed; to be returned at end */

	va_list(arg); /* initializes va_list */
	result = 0; /* initializes result to 0 */
	va_start(arg, format); /* starts va_list after format variable */
	if (format == NULL) /* basic check for NULL in format */
	{
		exit(98);
	}
	while (*format != '\0') /* loop through *format string */
	{
		if (*format == '%' && get_funct(1 + format) != NULL)
		{
			/* checks if format has "%[letter in get_funct] */
			format++; /* moves to format specifier */
			op = get_funct(format);
			/* returns function pointer to matching function in struct */
			if (op != NULL)
			{
				result += op(format, arg); /* adds int return of function to result */
			}
		}
		else if (*format == '%' && *(1 + format) == '\0')
		{
			/* the above else if statement details a specific case of _printf("%") */
			return (-1); /* specific return value of standard printf */
		}
		else
		{
			/* this else statement prints *format if no other conditions are met */
			_putchar(*format);
			result++; /* addes to result, amount of bytes printed */
		}
		format++; /* moves to next character in *format */
	}
	va_end(arg); /* ends the va_list */
	return (result); /* returns accumulated result amount of bytes printed */
}
