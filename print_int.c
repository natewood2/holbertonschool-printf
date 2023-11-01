#include "main.h"
/**
 * print_int - prints signed int, subfunction of printf
 * @int: integer to print
 *
 * Return: nothing
 */
void print_int (int n)
{
	if (n > 9) {
		int a = n / 10;
		n -= 10 * a;
		print_int(a);
	}
	_putchar('0' + n);
}
