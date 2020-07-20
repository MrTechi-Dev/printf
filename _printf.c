#include "holberton.h"
/**
 *
 *
 *
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
