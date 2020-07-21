#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct op - shows which function corresponds to the letter.
 * @data: char that indicates the type of data to print.
 * @func: pointer to function that print the data.
 */

typedef struct op
{
	char *data;
	int (*func)(va_list, int);
} data_t;

int _putchar(char c);
int printfchar(va_list, int a);
int printfstring(va_list, int a);
int printfint(va_list, int a);
int intrecursion(unsigned int aux);
int _printf(const char *format, ...);
int printf_valid(const char *format);
int (*printf_struct(char s))(va_list, int);

#endif
