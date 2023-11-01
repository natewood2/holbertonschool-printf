#include "main.h"

/**
 * get_funct - get the function
 * @s: input value
 * Return: void
*/

void (*get_funct(char *s))(void *)
{
	int i;
	my_printf p[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", get_int},
		{"i", print_unsigned_int},
		{NULL, NULL}
	};

	i++

	while (my_printf[i].op != NULL && *(my_printf[i].op) != *s)
		i++;
	return (my_print[i].f);
}
