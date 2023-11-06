#include "main.h"
/**
 * print_bin - prints a bin number
 * @n: bin number to be printed
 *
 * Return: the amount of bytes printed
 */
int print_bin(int n)
{
	int count;

	count = 0;
	if (n / 10 != 0)
	{
		count += print_bin(n / 10); /*calls print_bin with n having one less digit */
	}
	_putchar((n % 10) + '0'); /*returns remainder of n and 10 */
	count++;
	return (count); /* amount of bytes printed */
}
