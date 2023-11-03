#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_int- prints a signed integer.
 * @n: the integer to be printed.
 * @count: the number of characters printed.
 * Return: the result of temp multiplied by the size of an int(4)
 */
int print_int(int n, int count)
{
int a, temp;

temp = count;
if (n > 9)
{
	a = n / 10;
	n -= 10 * a;
	temp++;
	print_int(a, temp);
}
_putchar('0' + n);
return (temp * 4);
}


/**
 * print_unsigned_int - prints an unsigned integer
 * @n: the integer to be printed.
 * @count: the number of characters printed.
 * Return: the result of temp multiplied by the size of an int(4)
 */
int print_unsigned_int(unsigned int n, unsigned int count)
{
	unsigned int a, temp;

	temp = count;
	if (n > 9)
	{
		a = n / 10;
		n -= 10 * a;
		temp++;
		print_unsigned_int(a, temp);
	}
	putchar('0' + n);
	return (temp * 4);
}

/**
 * get_int - pass n to another function which will print it
 * @format: a placeholder for format
 * @arg: VA_list containing the argument
 * Return: the amount of bytes that are printed
 */
int get_int(const char *format, va_list arg)
{
int n, result;

n = va_arg(arg, int);
result = 0;
if (n < 0 && *format != 0)
{
	n *= -1;
	putchar(45);
	result = print_int(n, 0);
}
else if (*format != 0)
{
	result = print_int(n, 0);
}
return (result);
}

/**
 * get_unsigned_int - gets unsigned int and sends it to print_int
 * @format: a placeholder for format
 * @arg: VA_list containing the argument
 * Return: the amount of bytes that are printed
 */
int get_unsigned_int(const char *format, va_list arg)
{
	unsigned int n, result;

	result = 0;
	if (*format != 0)
	{
		n = va_arg(arg, unsigned int);
		result = print_unsigned_int(n, 0);
	}
	return (result);
}
