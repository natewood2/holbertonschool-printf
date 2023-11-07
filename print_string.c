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

	s = va_arg(arg, char *); /* retrieves next arg from va_list of char * type */
	if (s == NULL)
	{
		s = "(null)"; /* mimics standard printf behavior when s is null */
	}
	for (i = 0; s[i] != '\0' && *format != 0; i++)
	{
		_putchar(s[i]); /* prints through string */
	}
	return (i);
}
