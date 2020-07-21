#include "holberton.h"
/**
 * printf_valid - validates if the syntax is ok.
 * @format: pointer to char to validate.
 * Return: 1 if the syntax is ok else 0.
 */

int printf_valid(const char *format)
{
	int i;
	int counter = 1;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			while (format[i + 1] == '%')
			{
				counter++;
				i++;
			}
			if (printf_struct(format[i + 1]))
				return (0);
		}
	}
	return (1);
}
