#include "holberton.h"
/**
 * print_rot - print string encode in rot13
 * @args: parameters passed in the value replacement
 * @num: counter sum
 * Return: number of characters printed
*/
int print_rot(va_list args, int num)
{
	int i = 0, j = 0;
	char *s;
	char az[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(ahyy)";
	while (s[i] != '\0')
	{
		j = 0;
		while (az[j] != '\0')
		{
			if (s[i] == az[j])
			{
				num += _putchar(rot13[j]);
				break;
			}
			if (s[i] < 65 || (s[i] > 90 && s[i] < 97) || s[i] > 122)
			{
				num += _putchar(s[i]);
				break;
			}
			j++;
		}
		i++;
	}
	return (num);
}
