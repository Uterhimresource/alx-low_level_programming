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
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
