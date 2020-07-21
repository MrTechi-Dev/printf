#include "holberton.h"
/**
 * printfchar - It will print the character in the _printf.c
 * @c:is the charactaer passed from the main file
 * @count: Is the number iterated in the function.
 * Return: The number of characters
 */
int printfchar(va_list c, int count)
{
	_putchar(va_arg(c, int));
	return (++count);
}
/**
 * printfstring - It will print the string in the _printf.c function
 * @str: is the string passed from the main file
 * @count: Is the number iterated in the function.
 * Return: The number of characters
 */
int printfstring(va_list str, int count)
{
	int i;
	char *ptr;

	ptr = va_arg(str, char *);
	if (ptr == NULL)
		ptr = "(null)";
	for (i = 0; ptr[i] != '\0'; i++, count++)
		_putchar(ptr[i]);
	return (count);
}
/**
 * printfint - It will print the number in the _printf.c function
 * @n: is the number passed from the main file
 * @count: Is the number iterated in the function.
 * Return: The number of characters
 */
int printfint(va_list n, int count)
{
	int number;
	int aux;

	number = va_arg(n, int);
	if (number < 0)
	{
		aux = -number;
		count += _putchar('-');
	}
	else
		aux = number;
	if (aux / 10 > 0)
		intrecursion(aux / 10);
	count += _putchar((aux % 10) + '0');
	return (count);
}
/**
 * intrecursion - It will print the number in for recurcion.
 * @n: is the number passed form printfint function.
 * Return: The number of characters
 */
int intrecursion(unsigned int n)
{
	int count = 0;

	if (n / 10 > 0)
		count += intrecursion(n / 10);
	return (_putchar((n % 10) + '0') + count);
}

/**
 * func_rot13 - print string encode in rot13
 * @args: parameters passed in the value replacement
 * Return: number of characters printed
*/
int func_rot13(va_list args)
{
	int i = 0;
	int j = 0;
	int num = 0;
	char temp;
	char *s = va_arg(args, char *);

	char az[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (az[j] != '\0')
		{
			if (s[i] == az[j])
			{
				temp = rot13[j];
				_putchar(temp);
				num += 1;
				break;
			}
			j++;
		}
		i++;
		if (!(s[i] > 64 && s[i] < 91) && !(s[i] > 96 && s[i] < 123))
		{
			_putchar(s[i]);
			num += 1;
		}
	}
	return (num - 1);
}
