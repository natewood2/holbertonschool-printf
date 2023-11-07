#include "main.h"

/**
 * get_funct - Retrieve function pointer based on a format specifier character.
 * @s: The input character representing the desired format specifier.
 * Return: a function pointer that corresponds to the format
*/

int (*get_funct(const char *s))(const char *format, va_list arg)
{
	int i, size; /* declaring counter i and size of array */

	my_printf p[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", get_int},
		{"i", get_int},
		{"b", get_bin},
		{"0", NULL}
	};
	/* array of function pointers with matching char *; a dictionary */

	i = 0; /* setting i to 0 */
	size = 6; /* setting size to size of above array */

	while ((p[i].op[0]) != s[0] && i < size)
		i++;
	/**
	 * if p[i].op[0] does not equal the first letter of *s and as long as i
	 * is less than size, i will be added to
	 * the while loop will stop and return the matching *f if
	 * p[i].op[0] matches s[0], if none match, it will return NULL
	 */
	return (p[i].f);
}
