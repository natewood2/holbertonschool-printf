#include "main.h"

/**
 * get_funct - Retrieve function pointer based on a format specifier character.
 * @s: The input character representing the desired format specifier.
 * Return: a function pointer that corresponds to the format
*/

int (*get_funct(const char *s))(const char *format, va_list arg)
{
	int i = 0;

	my_printf p[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", get_int},
		{"i", get_unsigned_int},
		{NULL, NULL}
	};

	while ((p[i].op[0]) != s[0])
		i++;
	return (p[i].f);
}
