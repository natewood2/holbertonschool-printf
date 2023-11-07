#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_int- recursive function; prints a signed integer.
 * @n: the integer to be printed.
 * Return: nothing
 */
void print_int(int n)
{
int a;

a = 0;
if (n < -9)
{
	/**
	 * for double digit negative numbers we print the negative sign
	 * then remove the last digit from n (storing that value in a) and rename n
	 * to be that last digit then we make both a and n positive and then
	 * recursively call print_int with the positive 'a'
	 */
	_putchar('-');
	a = n / 10;
	n -= 10 * a;
	a *= -1;
	n *= -1;
	print_int(a);
}
else if (n < 0)
{
	/* single digit negative numbers; print negative; then absolute value of n */
	_putchar('-');
	n *= -1;
}
if (n > 9)
{
	/**
	 * the star of the show, takes all double digit positive number, removes last
	 * digit from n (stores that value in a)
	 * redefines n as the last digit and then recursively calls print_int with
	 * new value 'a'
	 */
	a = n / 10;
	n -= 10 * a;
	print_int(a);
}
_putchar('0' + n); /* prints n; effective base case of n < 9 && n > 0 */
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

n = va_arg(arg, int); /* gets next int value from args, storing in n */
length = 0;
x = n; /* creating "copy" of n */
if (x < 0 || x == 0)
{
	length++; /* adding to length for '-' and if n = 0 */
}
while (x != 0)
{
	x /= 10;
	++length; /* finding how many digits n has through copy x */
}
if (*format != 0)
{
	print_int(n); /* calls print_int and passes n */
}
return (length); /* returns length as the amount of bytes printed */
}
