#include "main.h"
/**
 * print_string -- prints a string; subfunction of printf
 * @temp: void pointer to be printed
 *
 * Return: nothing
 */
void print_string(void *temp)
{
	int i;
	char *string_holder;

	string_holder = (char *)temp;
	for (i = 0; string_holder[i] != '\0'; i++)
	{
		print_char(string_holder[i]);
	}
}
