#include "main.h"
#include <stddef.h>
/**
 * print_unsigned_int - prints unsigned ints
 * @temp: void pointer that holds unsigned int
 *
 * Return: nothing
 */
void print_unsigned_int(void *temp)
{
	unsigned int int_holder;

	int_holder = *((unsigned int *)temp);
	print_int(int_holder);
}
