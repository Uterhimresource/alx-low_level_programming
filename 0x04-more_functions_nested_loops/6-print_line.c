#include "main.h"
/**
 * print_line - function
 * @n: variable to fix upper limit
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
