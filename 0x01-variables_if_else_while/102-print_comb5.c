#include <stdio.h>

/**
 * main - function where excution begin
 * Description: display combination numbers
 * Return: 0 for success
 */
int main(void)
{
	int n;
	int in;

	for (n = 0; n < 99; n++)
	{
		for (in = n + 1; in < 100; in++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((in / 10) + '0');
			putchar((in % 10) + '0');

			if (n == 98 && in == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
