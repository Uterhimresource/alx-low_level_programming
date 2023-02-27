#include "main.h"
/**
 * _puts - function of print string character
 * @str: second variable of parameter
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
