#include "holberton.h"
/**
 * printf_unsig - this function will print the unsigned number
 * @args: argument passed to the function
 * @count: Counter to be return to the function
 * Return: Retunr the number of characters printed
 */
int printf_unsig(va_list args, int count)
{
	unsigned int number;
	int i;
	int length = 0;
	int aux = 1;

	number = va_arg(args, unsigned int);
	while (number / aux >= 10)
	{
		length++;
		aux = aux * 10;
	}
	for (i = 0; i <= length; i++)
	{
		count += _putchar(((number / aux) % 10) + '0');
		number = number % aux;
		aux = aux / 10;
	}
	return (count);
}
