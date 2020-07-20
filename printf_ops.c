#include "holberton.h"
/**
 *
 *
 *
 *
 */

int printfchar(va_list c, int count)
{
	_putchar(va_arg(c, int));
	return (++count);
}

int printfstring(va_list str, int count)
{
	int i;
	char *ptr;

	ptr = va_arg(str, char *);
	if (ptr == NULL)
		ptr = "(null)";
	for (i = 0; ptr[i] != '\0'; i ++, count++)
	{
		_putchar (ptr[i]);
	}
	return (count);
}
