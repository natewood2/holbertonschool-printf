#include "main.h"
/**
 * get_bin - retrieves int value, converts to binary, prints, and returns bytes
 * @format: string that includes the format
 * @arg: arguments from which int value is pulled
 * Return: returns amount of bytes printed
 */
int get_bin(const char *format, va_list arg)
{
	int n, i, j, temp;
	int binaryNum[32];
	/* Array to store binary number */

	i = 0;
	n = va_arg(arg, int);
	
	if (*format != 0)
	{
		while (n > 0)
		{
			/* storing remainder in binary array */
			binaryNum[i] = n % 2;
			n = n / 2;
			i++;
		}

		/* Reverse the array */
		for (j = 0; j < i / 2; j++)
		{
			temp = binaryNum[j];
			binaryNum[j] = binaryNum[i - j - 1];
			binaryNum[i - j - 1] = temp;
		}
		/* printing binary array */
		for (j = 0; j < i; j++)
		{
			_putchar('0' + binaryNum[j]);
		}
	}
	return (i);
}
