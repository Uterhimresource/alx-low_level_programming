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

	for (n = 0; n < 9; n++)
	{
		for (in = n + 1; in < 10; in++)
		{
			putchar((n % 10) + '0');
			putchar((in % 10) + '0');
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
