#include "main.h"
/**
 * get_bin - retrieves int value, converts to binary, prints, and returns bytes
 * @format: string that includes the format
 * @arg: arguments from which int value is pulled
 */
int get_bin(const char *format, va_list arg)
{
	int n, length;
	
	n = va_arg(arg, int);
	length = 0;
	if (*format != 0)
	{
		n = convert_bin(n); /* converts n to bin with helper function */
		length = print_bin(n); /* prints n with helper function */
	}
	return (length); /* returns amount of bytes printed */
}
