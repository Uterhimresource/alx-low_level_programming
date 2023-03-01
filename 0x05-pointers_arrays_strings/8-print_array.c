#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print array
 * @a: array variable of parameter
 * @n: count
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
