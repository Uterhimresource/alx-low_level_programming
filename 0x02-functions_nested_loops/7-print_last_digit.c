#include "main.h"
/**
 *print_last_digit - function
 * @c: parameter
 * Return: 0 when success
 */
int print_last_digit(int c)
{
	int med;

	if (c < 0)
		c = c * -1;
	med = c % 10;
	_putchar(med + '0');
	return (med);
}
