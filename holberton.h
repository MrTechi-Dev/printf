#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * struct op - shows which function corresponds to the letter.
 * @data: char that indicates the type of data to print.
 * @func: pointer to function that print the data.
 */

typedef struct op
{
	char *data;
	int (*func)(va_list);
} data_t;

int _putchar(char c);
int printfchar(va_list);
int printfstring(va_list);
int _printf(const char *format, ...);
int printf_valid(const char *format);
int (*printf_struct(char s))(va_list);

#endif
