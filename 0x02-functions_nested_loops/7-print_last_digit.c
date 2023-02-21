#include "main.h"
/**
 *print_last_digit - function
 * @c: parameter
 * Return: 0 when success
 */
int print_last_digit(int c)
{
	if (c < 0)
		c = c * -1;
	_putchar((c % 10) + '0');
	return (c % 10);
}
