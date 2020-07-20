#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
 */
int (*printf_struct(char s))(va_list, int)
{
	data_t ops[] = {
		{"c", printfchar},
		{"s", printfstring},
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
