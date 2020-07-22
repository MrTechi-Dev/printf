#include "holberton.h"
/**
 * printf_string_new - It will print the string in the _printf.c
 * @args:is the string passed from the main file
 * @count: Is the number iterated in the function.
 * Return: The number of characters
 */
int printf_string_new(va_list args, int count)
{
	int i;
	char *ptr;

	ptr = va_arg(args, char *);
	for (i = 0; ptr[i]; i++)
	{
		if ((ptr[i] > 0 && ptr[i] < 32) || ptr[i] >= 127)
		{
			count += _putchar(92);
			count += _putchar('x');
			count += hexa_string(ptr[i]);
		}
		else
			count += _putchar(ptr[i]);
	}
	return (count);
}
/**
 * hexa_string - It will print the char in hexadecimal
 * @c: is the char to converted
 * Return: The number of characters
 */
int hexa_string(char c)
{
	int counter = 0, aux, i, j;
	char array[2];

	for (j = 0; j <= 1; j++)
	{
		aux = c % 16;
		if (aux < 10)
			array[j] = 48 + aux;
		else
			array[j] = 55 + aux;
		c = c / 16;
	}
	for (i = j - 1; i >= 0; i--)
		counter += _putchar(array[i]);
	return (counter);
}
