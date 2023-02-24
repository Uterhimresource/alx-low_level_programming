#include "main.h"
/**
 * print_diagonal - function
 * @n: variable to fix upper limit
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
