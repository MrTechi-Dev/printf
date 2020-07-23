#include "holberton.h"
/**
 * printf_conditions - print + or space ' ' or # after % symbol
 * @s: is the string from the function _printf.c
 * @index: position after the % symbol
 * Return: counter
 */
int printf_conditions(const char *s, int index)
{
	if (s[index] == '+' || s[index] == ' ')
		return (1);
	else if (s[index] == 'h' || s[index] == 'l' || s[index] == '#')
		return (2);
	return (0);
}
