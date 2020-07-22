#include "holberton.h"
/**
 * print_binary - convert decimal number to binary number.
 * @n: Is the number decimal to convert
 * @count: counter sum
 * Return: number of characters printed
*/
int print_binary(va_list n, int count)
{
	int i, j;
	unsigned int number;
	unsigned int array[31];

	number = va_arg(n, int);
	if (number <= 0)
		count += _putchar('0');
	else
	{
		for (j = 0; number > 0; j++)
		{
			array[j] = number % 2;
			number = number / 2;
		}
		array[j] = number % 2;
		for (i = j - 1; i >= 0; i--)
			count += _putchar(array[i] + '0');
	}
	return (count);
}
