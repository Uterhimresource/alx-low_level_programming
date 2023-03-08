#include "main.h"
/**
 * factorial - factorial function
 * @n: factorial valee
 * Return: factorial result, 1 for 0 and -1 for negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
