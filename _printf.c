#include "holberton.h"
/**
 * _printf - Is our own _printf version that will
 * print any given input
 * @format: The format of the printf
 * Return: The number of the character to be print
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list valist;

	if (!printf_valid(format) || (format == NULL))
		return (-1);
	va_start(valist, format);
	for (i = 0; format[i] != '\0';  i++, count++)
	{
		if (format[i] == '%')
		{
			++i;
			if (format[i] != '%')
			{
				--count;
				count = printf_struct(format[i])(valist, count);
			}
			else
				_putchar(format[i]);
		}
		else
			_putchar(format[i]);
	}
	va_end(valist);
	return (count);
}
