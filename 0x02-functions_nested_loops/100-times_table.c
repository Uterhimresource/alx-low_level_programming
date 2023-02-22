#include "main.h"
/**
 * print_times_table - function
 * @n: variable
 * Return: 0 when success
 */
void print_times_table(int n)
{
	int n1;
	int n2;
	int res;

	if (!(n > 15 || n < 0))
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			for (n2 = 0; n2 <= n; n2++)
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
}
