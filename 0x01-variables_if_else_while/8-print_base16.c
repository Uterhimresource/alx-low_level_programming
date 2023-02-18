#include <stdio.h>

/**
 * main - function where excution begin
 * Description: display base 10 numbers from 0 t0 9
 * Return: 0 for success
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
