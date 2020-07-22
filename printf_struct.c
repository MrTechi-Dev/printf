#include "holberton.h"
#include <stdio.h>
/**
 * printf_struct - Indicates the function to follow according
 * the structure
 * @s: Is char after the symbol "%"
 * Return: the data to the function to process
 */
int (*printf_struct(char s))(va_list, int)
{
	data_t ops[] = {
		{"c", printfchar},
		{"s", printfstring},
		{"i", printfint},
		{"d", printfint},
		{"R", print_rot},
		{"b", print_binary},
		{"u", printf_unsign},
		{"o", printf_octal},
		{"X", printf_mhexa},
		{"x", printf_hexa},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].data)
	{
		if (ops[i].data[0] == s)
			return (ops[i].func);
		i++;
	}
	return (NULL);
}
