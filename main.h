#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>
#include <string.h>

int _putchar(char c);
/**
 * struct my_printf - struct op
 *
 * @op: op
 * my_printf - struct for the remake of printf function
 * @f: the function associated
 */
typedef struct my_printf
{
	char *op;
	void (*f)(void *);

} my_printf;

#endif

