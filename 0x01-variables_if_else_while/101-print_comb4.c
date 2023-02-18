#include <stdio.h>

/**
 * main - function where excution begin
 * Description: display three combination numbers
 * Return: 0 for success
 */
int main(void)
{
	int n;
	int in;
	int tn;

	for (n = 0; n < 8; n++)
	{
		for (in = n + 1; in < 9; in++)
		{
			for (tn = in + 1; tn < 10; tn++)
			{
				putchar((n % 10) + '0');
				putchar((in % 10) + '0');
				putchar((tn % 10) + '0');
				if (n < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
