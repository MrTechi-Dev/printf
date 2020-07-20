#include "holberton.h"
/**
 * printfchar - It will print the character in the _printf.c
 * @c:is the charactaer passed from the main file
 * Return: The number of characters
 */

int printfchar(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
/**
 * printfstring - It will print the string in the _printf.c function
 * @str: is the string passed from the main file
 * Return: The number of characters
 */

int printfstring(va_list str)
{
	int i;
	char *ptr;

	ptr = va_arg(str, char *);
	if (ptr == NULL)
		ptr = "(null)";
	for (i = 0; ptr[i] != '\0'; i ++)
	{
		_putchar(ptr[i]);
	}
	return (--i);
}
