#include "holberton.h"
/**
 * printf_pointer - Print the addres memory of the args.
 * @count: Counter to be return to the function
 * @args: argument passed to the function
 * Return: Retunr the number of characters printed
 */
int printf_pointer(va_list args, int count)
{
	int j, i;
	unsigned long int number, aux;
	char array[100];
	void *ptr;
	char *nothing = "(nil)";

	ptr = va_arg(args, void *);
	if (!ptr)
	{
		for (i = 0; nothing[i]; i++)
			count += _putchar(nothing[i]);
		return (count);
	}
	number = (unsigned long int)ptr;
	for (j = 0; number; j++)
	{
		aux = number % 16;
		if (aux < 10)
			array[j] = 48 + aux;
		else
			array[j] = 87 + aux;
		number = number / 16;
	}
	count += _putchar('0');
	count += _putchar('x');
	for (i = j - 1; i >= 0; i--)
		count += _putchar(array[i]);
	return (count);
}
