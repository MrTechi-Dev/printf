#include "holberton.h"
/**
 * print_rot - print string encode in rot13
 * @args: parameters passed in the value replacement
 * @num: counter sum
 * Return: number of characters printed
*/
int print_rot(va_list args, int num)
{
	int i = 0;
	int j;
	char temp;
	char *s;

	char az[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(args, char *);
	while (s[i] != '\0')
	{
		j = 0;
		while (az[j] != '\0')
		{
			if (s[i] == az[j])
			{
				temp = rot13[j];
				num = num + _putchar(temp);
				break;
			}
			j++;
		}
		i++;
		if (!(s[i] > 64 && s[i] < 91) && !(s[i] > 96 && s[i] < 123))
		{
			num = num + _putchar(s[i]);
		}
	}
	return (num - 1);
}
