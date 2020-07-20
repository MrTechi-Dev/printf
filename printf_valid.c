#include "holberton.h"
/**
 * printf_valid - validates if the syntax is ok.
 * @format: pointer to char to validate.
 * Return: 1 if the syntax is ok else 0.
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
