#include <stdio.h>

/**
 * main - function where excution begin
 * Description: display a-z in lower case
 * Return: 0 for success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
