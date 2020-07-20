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
	{
		_putchar(ptr[i]);
	}
	return (count);
}
