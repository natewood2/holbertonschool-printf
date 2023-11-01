#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>
#include <string.h>
int _putchar(char c);

typedef struct my_printf
{
        char *op;
        void(*f)(void*);
} my_printf;

#endif