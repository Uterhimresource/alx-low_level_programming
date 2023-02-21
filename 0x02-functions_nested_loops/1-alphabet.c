#include "main.h"
/**
 * print_alphabet - where execution begin
 * Return: 0 when success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
