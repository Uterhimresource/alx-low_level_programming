#include "main.h"
/**
 * times_table - function
 * Return: 0 when success
 */
void times_table(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			_putchar((n1 * n2) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
