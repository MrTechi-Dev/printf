#include "holberton.h"
#include <stdio.h>
/**
 * printf_struct - Indicates the function to follow according
 * the structure
 * @s: Is the string  send from the function _printf
 * @index: is the position after % symbol in the string
 * Return: the data to the function to process
 */
int (*printf_struct(const char *s, int index))(va_list, int)
{
	data_t ops[] = {
		{"c", printfchar},
		{"s", printfstring},
		{"R", print_rot},
		{"b", print_binary},
		{"S", printf_string_new},
		{"p", printf_pointer},
		{"d", printfint},
		{"i", printfint},
		{"u", printf_unsig},
		{"x", printf_hexa},
		{"X", printf_mhexa},
		{"o", printf_octal},
		{NULL, NULL}
	};
	int i = 0;

	if (s[index] == '+' || s[index] == ' ' || s[index] == '#' ||
		s[index] == 'h' || s[index] == 'l')
	{
		i = 6;
		index++;
	}
	while (ops[i].data)
	{
		if (ops[i].data[0] == s[index])
			return (ops[i].func);
		i++;
	}
	return (NULL);
}
