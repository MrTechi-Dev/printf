#include "holberton.h"
/**
 * print_binary - convert decimal number to binary number.
 * @n: Is the number decimal to convert
 * @count: counter sum
 * Return: number of characters printed
*/
int print_binary(va_list n, int count)
{
	int i, length = 0;
	int number, value;
	int *ptr;

	number = va_arg(n, int);
	value = number;
	while (value > 0)
	{
		value = value / 2;
		length++;
	}
	ptr = malloc(length * sizeof(int));
	if (ptr == NULL)
		return (0);
	for (i = 0; number > 0; i++)
	{
		ptr[i] = number % 2;
		number = number / 2;
	}
	for (i = length - 1; i >= 0; i--)
		count += _putchar(ptr[i] + '0');
	free(ptr);
	return (count);
}
