#include "holberton.h"
/**
 * printf_unsign - thus function will print the unsigned number
 * @count: Counter to be return to the function
 * @args: argument passed to the function
 * Return: Retunr the number of characters printed
 */
int printf_unsign(va_list args, int count)
{
	unsigned int number;
	int i;
	int length = 0;
	int aux = 1;

	number = va_arg(args, unsigned int);
	if (number < 0)
		number = 4294967296 + number;
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
/**
 * printf_octal - Print the octal number
 * @count: Counter to be return to the function
 * @args: argument passed to the function
 * Return: Retunr the number of characters printed
 */
int printf_octal(va_list args, int count)
{
	unsigned int n;
	int i;
	int j;
	int octalNumber[100];
	int counter;

	n = va_arg(args, int);
	i = 0;
	while (n != 0)
	{
		octalNumber[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		count += _putchar(octalNumber[j] + '0');
	return (count);
}
/**
 * printf_hexa - Print the hexadecimal number in lowecase.
 * @count: Counter to be return to the function
 * @args: argument passed to the function
 * Return: Retunr the number of characters printed
 */
int printf_hexa(va_list args, int count)
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
				array[j] = 87 + aux;
			number = number / 16;
		}
		for (i = j - 1; i >= 0; i--)
			count += _putchar(array[i]);
	}
	return (count);
}
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

