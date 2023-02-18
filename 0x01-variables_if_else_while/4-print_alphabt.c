#include <stdio.h>

/**
 * main - function where excution begin
 * Description: display a-z in lower case except e and q
 * Return: 0 for success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
