#include "main.h"
/**
 * print_alphabet_x10 - where execution begin
 * Return: 0 when success
 */
void print_alphabet_x10(void)
{
	char c;
	int ctr;

	for (ctr = 1; ctr < 11; ctr++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
