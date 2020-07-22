#include <limits.h>
#include <stdio.h>
#include "holberton.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%d\n", _printf("%R\n", NULL));
	return (0);
}


