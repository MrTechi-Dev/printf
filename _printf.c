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
	int aux = 0;
	int (*ptr)(va_list);
	va_list valist;

	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (-1);
	va_start(valist, format);
	for (i = 0; format[i] != '\0';  i++, count++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				++i;
			}
			else
			{
				ptr = printf_struct(format[i + 1]);
				if (ptr)
				{
					count += ptr(valist);
					++i;
					aux++;
				}
				if (aux == 0)
					_putchar(format[i]);
			}
		}
	}
	va_end(valist);
	return (count);
}
