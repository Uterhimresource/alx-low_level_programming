#include "main.h"
/**
 * print_square - function
 * @size: variable to fix upper limit
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
