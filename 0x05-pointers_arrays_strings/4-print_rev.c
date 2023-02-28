#include "main.h"

/**
 * print_rev - reverse function
 * @s: variable that represent character data
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}

	for (i = c; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
