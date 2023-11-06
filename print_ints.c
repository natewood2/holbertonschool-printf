#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_int- prints a signed integer.
 * @n: the integer to be printed.
 * Return: nothing
 */
void print_int(int n)
{
int a;

a = 0;
if (n < -9)
{
	_putchar('-');
	a = n / 10;
	n -= 10 * a;
	a *= -1;
	n *= -1;
	print_int(a);
}
else if (n < 0)
{
	_putchar('-');
	n *= -1;
}
if (n > 9)
{
	a = n / 10;
	n -= 10 * a;
	print_int(a);
}
_putchar('0' + n);
}


/**
 * get_int - pass n to another function which will print it
 * @format: a placeholder for format
 * @arg: VA_list containing the argument
 * Return: the amount of bytes that are printed
 */
int get_int(const char *format, va_list arg)
{
int n, x, length;

n = va_arg(arg, int);
length = 0;
x = n;
if (x < 0 || x == 0)
{
	length++;
}
while (x != 0)
{
	x /= 10;
	++length;
}
if (*format != 0)
{
	print_int(n);
}
return (length);
}
