#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function
 * @n: upper bound
 * Return: 0 when success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	_putchar('\n');
}
