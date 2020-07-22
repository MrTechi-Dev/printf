#include "holberton.h"
/**
 * printf_mhexa - Print the hexadecimal number in uppercase.
 * @count: Counter to be return to the function
 * @args: argument passed to the function
 * Return: Retunr the number of characters printed
 */
int printf_mhexa(va_list args, int count)
{
	int j, i;
	unsigned int number, aux;
	char array[100];

	number = va_arg(args, unsigned int);
	if (number == 0)
		count += _putchar('0');
	else
	{
		for (j = 0; number > 0; j++)
		{
			aux = number % 16;
			if (aux < 10)
				array[j] = 48 + aux;
			else
				array[j] = 55 + aux;
			number = number / 16;
		}
		for (i = j - 1; i >= 0; i--)
			count += _putchar(array[i]);
	}
	return (count);
}
