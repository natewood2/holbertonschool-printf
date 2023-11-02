#include "main.h"
/**
 * print_string -- prints a string; subfunction of printf
 * @format: placeholder for format
 * @arg: va_list containing the arguments
 * Return: number of characters printed
 */

int print_string(const char *format, va_list arg)
{
	int i;
	char *s;

	s = va_arg(arg, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\0');
	return (i);
}
