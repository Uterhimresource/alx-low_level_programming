#include "main.h"
/**
 * print_array - function to print array
 * @a: array variable of parameter
 * @n: count
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
