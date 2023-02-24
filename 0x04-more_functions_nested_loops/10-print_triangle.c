#include "main.h"
/**
 * print_triangle - function
 * @size: variable to fix upper limit
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = size; i >= 1; i--)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
