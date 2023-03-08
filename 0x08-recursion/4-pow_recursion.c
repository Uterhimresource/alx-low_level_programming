#include "main.h"
/**
 * _pow_recursion - power function
 * @x: base variable
 * @y: power variable
 * Return: result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
