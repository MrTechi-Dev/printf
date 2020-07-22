#include "holberton.h"
/**
 * print_binary - convert decimal number to binary number.
 * @n: Is the number decimal to convert
 * @count: counter sum
 * Return: number of characters printed
*/
int print_binary(va_list n, int count)
{
	int i, length = 0, value;
	int number;
	int *ptr;

	number = va_arg(n, int);
	if (number <= 0)
		exit(8);
	ptr = malloc(33 * sizeof(int));
	if (!ptr)
		exit(8);
	value = number;
	while (value > 0)
	{
		value = value / 2;
		length++;
	}
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
