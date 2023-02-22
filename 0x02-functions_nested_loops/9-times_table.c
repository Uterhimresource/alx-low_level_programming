#include "main.h"
/**
 * times_table - function
 * Return: 0 when success
 */
void times_table(void)
{
	int n1;
	int n2;
	int res;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			res = n1 * n2;
			if (n2 != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && n2 != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
