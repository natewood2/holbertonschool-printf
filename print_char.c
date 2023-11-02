#include "main.h"
#include <stdio.h>
/**
 * print_char -- prints a char, subfunction of printf
 * @temp: void pointer passed to be printed
 *
 * Return: returns nothing
 */
void print_char(void *temp)
{
	putchar(*(char *)temp);
}
