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
int _printf(const char *format, ...);
int printf_valid(const char *format);
int (*printf_struct(const char *s, int index))(va_list, int);
int printfchar(va_list, int a);
int printfstring(va_list, int a);
int printfint(va_list, int a);
int print_rot(va_list args, int num);
int print_binary(va_list n, int count);
int printf_unsig(va_list args, int count);
int printf_mhexa(va_list args, int count);
int printf_hexa(va_list args, int count);
int printf_octal(va_list args, int count);
int printf_string_new(va_list args, int count);
int printf_pointer(va_list args, int count);
int hexa_string(char c);
int printf_conditions(const char *s, int index);

#endif
