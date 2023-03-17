#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function to create an array
 * @b: input variable
 * Return: result
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
