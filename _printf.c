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
	int (*ptr)(va_list, int);
	va_list valist;

	if (!printf_valid(format))
		return (-1);
	va_start(valist, format);
	for (i = 0; format[i] != '\0';  i++)
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			if (format[i + 1] == '%')
			{
				i++;
				count += _putchar('%');
			}
			else
			{
				ptr = printf_struct(format[i + 1]);
				if (ptr)
				{
					count = ptr(valist, count);
					i++;
				}
				else
					count += _putchar(format[i]);
			}
		}
	}
	va_end(valist);
	return (count);
}
