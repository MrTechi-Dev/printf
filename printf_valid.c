#include "holberton.h"
/**
 *
 *
 *
 *
 */
int printf_valid(const char *format)
{
	int i;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[++i] != '%')
		{
			if (format[i] == ' ')
				return (0);
			if (format[i] == '\0')
				return (0);
			if (!printf_struct(format[i]))
				return (0);
		}
	}
	return (1);
}
