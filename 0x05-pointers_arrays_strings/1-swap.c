#include "main.h"
/**
 * swap_int - swap function
 * @a: first paramater
 * @b: second variable of parameter
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

