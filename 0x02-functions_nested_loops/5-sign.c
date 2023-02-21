#include "main.h"
/**
 * print_sign - function
 * @n: parameter
 * Return: 0 when success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return ('+');
	}
	else if (n == 0)
	{
		return ('0');
	}
	else
	{
		return ('-');
	}
}
