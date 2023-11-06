#include "main.h"
/**
 * convert_bin - converts an unsigned int to binary
 * @n: int to be converted
 * Return: converted bin
 */
int convert_bin(int n)
{
	if (n < 2)
	{
		return (n);
	}
	return (convert_bin(n / 2) * 10 + n % 2); /* calls until n < 2 */
}
