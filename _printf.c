#include "holberton.h"
/**
 * _printf - Is our own _printf version that will
 * print any given input accordinf to the data structure
 * @format: The format of the printf
 * Return: The number of the character to be print
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	int (*ptr)(va_list, int);
	char *aux = (char *)format;
	va_list valist;

	if (!printf_valid(format) || format == NULL)
		return (-1);
	va_start(valist, format);
	for (i = 0; format[i] != '\0';  i++, aux++)
	{
		if (format[i] != '%')
			count += write(1, aux, 1);
		else
		{
			if (format[i + 1] == '%')
			{
				i++;
				count += write(1, aux, 1);
				aux++;
			}
			else
			{
				ptr = printf_struct(format[i + 1]);
				if (ptr)
				{
					count = ptr(valist, count);
					aux++;
					i++;
				}
				else
					count += write(1, aux, 1);
			}
		}
	}
	va_end(valist);
	return (count);
}
