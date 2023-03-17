#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array function
 * @min: var1
 * @max: var2
 * Return: array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, full;

	full = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * full);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		a[i] = min++;
	}
	return (a);
}
