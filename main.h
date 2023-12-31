#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>
#include <string.h>

int print_char(const char *format, va_list arg);
int print_string(const char *format, va_list arg);
int print_percent(const char *format, va_list arg);
void print_int(int n);
int (*get_funct(const char *s))(const char *format, va_list arg);
int get_int(const char *format, va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);
int print_bin(int n);
int get_bin(const char *format, va_list arg);
int convert_bin(int n);

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
	int (*f)(const char *format, va_list args);

} my_printf;


#endif
