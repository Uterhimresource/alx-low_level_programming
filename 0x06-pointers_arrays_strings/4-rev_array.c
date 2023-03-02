#include "main.h"
/**
 * reverse_arra - pointer function
 * @a: pointer variable for string
 * @n: length of array
 * Return: success
 */
void reverse_array(int *a, int n)
{
	int v1, v2, v3;

	if (n % 2 != 0)
		v3 = n + 1;
	else
		v3 = n;

	for (v1 = 0; v1 < v3 / 2; v1++)
	{
		v2 = a[v1];
		a[v1] = a[n - 1 - v1];
		a[n - 1 - v1] = v2;
	}
}

