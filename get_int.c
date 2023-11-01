#include <stddef.h>
#include "main.h"
/**
 * print_int - prints an int; subfunction of printf
 * @temp: void pointer of int to be printed
 *
 * Return: nothing
 */
void get_int(void *temp)
{
	size_t int_holder;

	int_holder = (size_t)temp;
	print_int(int_holder);
}
